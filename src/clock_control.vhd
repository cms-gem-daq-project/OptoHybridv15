library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library unisim;
use unisim.vcomponents.all;

library work;
use work.user_package.all;

entity clock_control is
port(

    -- FPGA clock

    fpga_clk_i          : in std_logic;
    fpga_clk_o          : out std_logic;
    fpga_pll_locked_o   : out std_logic;
    
    -- Exterior clock
    
    ext_clk_i           : in std_logic;
    
    -- VFAT2 clock
    
    vfat2_clk_o         : out std_logic;    
    vfat2_mclk_p_o      : out std_logic;
    vfat2_mclk_n_o      : out std_logic;
    
    -- GTP clocks

    rec_clk_i           : in std_logic;
    rec_pll_locked_o    : out std_logic;
    
    -- CDCE signals
    
    cdce_pri_p_o        : out std_logic;
    cdce_pri_n_o        : out std_logic;
    cdce_pll_locked_i   : in std_logic;
    cdce_ref_o          : out std_logic;
    cdce_powerdown_o    : out std_logic;
    cdce_sync_o         : out std_logic;
    cdce_le_o           : out std_logic;
    
    -- Configuration
   
    request_write_o     : out array32(3 downto 0);
    request_tri_o       : out std_logic_vector(3 downto 0);
    request_read_i      : in array32(3 downto 0)

);
end clock_control;

architecture Behavioral of clock_control is
    
    signal fpga_clk         : std_logic := '0';
    signal vfat2_clk_fpga   : std_logic := '0';
    signal fpga_pll_locked  : std_logic := '0';
    
    signal vfat2_clk_muxed  : std_logic := '0';
    
    signal rec_clk          : std_logic := '0';
    signal cdce_clk_rec     : std_logic := '0';
    signal rec_pll_locked   : std_logic := '0';
    
    signal cdce_clk_muxed   : std_logic := '0';
    
    signal vfat2_src_select : std_logic := '0';
    signal cdce_src_select  : std_logic := '0';

begin 
    
    --================================--
    -- VFAT2 clocking
    --================================--
    
    -- FPGA clock 
    
    fpga_clk_bufg : ibufg port map(i => fpga_clk_i, o => fpga_clk);
    
    fpga_clk_o <= fpga_clk;
        
    fpga_clk_pll_inst : entity work.fpga_clk_pll port map(clk_i => fpga_clk, clk_buf_o => open, clk_nobuf_o => vfat2_clk_fpga, locked_o => fpga_pll_locked);   
    
    fpga_pll_locked_o <= fpga_pll_locked;
    
    -- VFAT2 clock
    
    vfat2_clk_muxed <= vfat2_clk_fpga when vfat2_src_select = '0' else ext_clk_i;
    
    vfat2_buf_clk_inst : bufg port map(i => vfat2_clk_muxed, o => vfat2_clk_o);
    
    vfat2_clk_obufds : obufds port map(i => vfat2_clk_muxed, o => vfat2_mclk_p_o, ob => vfat2_mclk_n_o);
    
    --================================--
    -- CDCE clocking
    --================================--
    
    -- Recovery clock
    
    rec_clk_bufg : bufg port map(i => rec_clk_i, o => rec_clk);
    
    rec_clk_pll_inst : entity work.rec_clk_pll port map(clk_i => rec_clk, clk_buf_o => open, clk_nobuf_o => cdce_clk_rec, locked_o => rec_pll_locked_o);
    
    rec_pll_locked_o <= rec_pll_locked;
    
    -- CECE clock
    
    cdce_clk_muxed <= vfat2_clk_muxed when cdce_src_select = '0' else cdce_clk_rec;

    cdce_primary_clk_obufds : obufds port map(i => cdce_clk_muxed, o => cdce_pri_p_o, ob => cdce_pri_n_o);
    
    cdce_ref_o <= '1';
    cdce_powerdown_o <= fpga_pll_locked;
    cdce_sync_o <= '1';
    cdce_le_o <= '1'; 
    
    --================================--
    -- Source select
    --================================--
    
    clock_switch_inst : entity work.clock_switch
    port map(
        fpga_clk_i          => fpga_clk,
        cdce_pll_locked_i   => cdce_pll_locked_i,
        rec_pll_locked_i    => rec_pll_locked,
        vfat2_src_select_o  => vfat2_src_select,
        cdce_src_select_o   => cdce_src_select,
        request_write_o     => request_write_o,
        request_tri_o       => request_tri_o,
        request_read_i      => request_read_i
    );

end Behavioral;

