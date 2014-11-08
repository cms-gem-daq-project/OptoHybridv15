library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;

library unisim;
use unisim.vcomponents.all;

entity optohybrid_top is
port(

    -- OptoHybrid signals

    fpga_clk_i          : in std_logic;
    fpga_rx_i           : in std_logic;
    fpga_tx_o           : out std_logic;
    enable_gtp_o        : out std_logic; 
    fpga_test_o         : out std_logic_vector(5 downto 0);
    leds_o              : out std_logic_vector(3 downto 0);
    
    -- CDCE signals
    
    cdce_le_o           : out std_logic;
    cdce_miso_i         : in std_logic;
    cdce_mosi_o         : out std_logic;
    cdce_sclk_o         : out std_logic;
    
    cdce_auxout_i       : in std_logic;
    cdce_plllock_i      : in std_logic;
    cdce_powerdown_o    : out std_logic;
    cdce_ref_o          : out std_logic;
    cdce_sync_o         : out std_logic;
    cdce_pri_p_o        : out std_logic;
    cdce_pri_n_o        : out std_logic;
    
    -- VFAT2 common lines
    
    vfat2_resets_o      : out std_logic_vector(1 downto 0);
    vfat2_mclk_p_o      : out std_logic;
    vfat2_mclk_n_o      : out std_logic;
    vfat2_t1_p_o        : out std_logic;
    vfat2_t1_n_o        : out std_logic;
    vfat2_sda_io        : inout std_logic_vector(5 downto 0);
    vfat2_scl_o         : inout std_logic_vector(5 downto 0);
    vfat2_dvalid_i      : in std_logic_vector(5 downto 0);

    -- VFAT2 signal lines
    
    vfat2_data_0_i      : in std_logic_vector(8 downto 0); -- 7 downto 0 = S bits, 8 = data_out (tracking)
    vfat2_data_1_i      : in std_logic_vector(8 downto 0);
    vfat2_data_2_i      : in std_logic_vector(8 downto 0);
    vfat2_data_3_i      : in std_logic_vector(8 downto 0);
    vfat2_data_4_i      : in std_logic_vector(8 downto 0);
    vfat2_data_5_i      : in std_logic_vector(8 downto 0);
    vfat2_data_6_i      : in std_logic_vector(8 downto 0);
    vfat2_data_7_i      : in std_logic_vector(8 downto 0);
    vfat2_data_8_i      : in std_logic_vector(8 downto 0); 
    vfat2_data_9_i      : in std_logic_vector(8 downto 0);
    vfat2_data_10_i     : in std_logic_vector(8 downto 0);
    vfat2_data_11_i     : in std_logic_vector(8 downto 0);
    vfat2_data_12_i     : in std_logic_vector(8 downto 0);
    vfat2_data_13_i     : in std_logic_vector(8 downto 0);
    vfat2_data_14_i     : in std_logic_vector(8 downto 0);
    vfat2_data_15_i     : in std_logic_vector(8 downto 0);
    vfat2_data_16_i     : in std_logic_vector(8 downto 0);
    vfat2_data_17_i     : in std_logic_vector(8 downto 0);
    vfat2_data_18_i     : in std_logic_vector(8 downto 0);
    vfat2_data_19_i     : in std_logic_vector(8 downto 0);
    vfat2_data_20_i     : in std_logic_vector(8 downto 0);
    vfat2_data_21_i     : in std_logic_vector(8 downto 0);
    vfat2_data_22_i     : in std_logic_vector(8 downto 0);
    vfat2_data_23_i     : in std_logic_vector(8 downto 0);
    
    -- GTP signals
    
    rx_p_i              : in std_logic_vector(3 downto 0);
    rx_n_i              : in std_logic_vector(3 downto 0);
    tx_p_o              : out std_logic_vector(3 downto 0);
    tx_n_o              : out std_logic_vector(3 downto 0);
    
    gtp_refclk_p_i      : in std_logic_vector(3 downto 0);
    gtp_refclk_n_i      : in std_logic_vector(3 downto 0)
    
);
end optohybrid_top;

architecture Behavioral of optohybrid_top is
    
    -- Clocking

    signal fpga_clk     : std_logic := '0';  
    signal clk40MHz     : std_logic := '0';
    signal vfat2_clk    : std_logic := '0';
    signal gtp_clk      : std_logic := '0';
    
    -- Resets
    
    signal reset        : std_logic := '0';
    
    -- VFAT2
    
    signal vfat2_t1     : std_logic := '0';
    signal vfat2_sda_i  : std_logic_vector(5 downto 0) := (others => '0');
    signal vfat2_sda_o  : std_logic_vector(5 downto 0) := (others => '0');
    signal vfat2_sda_t  : std_logic_vector(5 downto 0) := (others => '0');
    
    -- GTP
    
    signal rx_error     : std_logic_vector(3 downto 0) := (others => '0');
    signal rx_kchar     : std_logic_vector(7 downto 0) := (others => '0');
    signal rx_data      : std_logic_vector(63 downto 0) := (others => '0');
    signal tx_kchar     : std_logic_vector(7 downto 0) := (others => '0');
    signal tx_data      : std_logic_vector(63 downto 0) := (others => '0');

    -- ChipScope signals
    
    signal cs_icon0     : std_logic_vector(35 downto 0);
    signal cs_icon1     : std_logic_vector(35 downto 0);
    signal cs_in        : std_logic_vector(31 downto 0);
    signal cs_out       : std_logic_vector(31 downto 0);
    signal cs_ila       : std_logic_vector(31 downto 0);
    
begin

    -- OptoHybrid reset
    reset <= '0';
    
    --================================--
    -- VFAT2 
    --================================--
  
    -- T1
    t1_obufds : obufds port map(I => vfat2_t1, O => vfat2_t1_p_o, OB => vfat2_t1_n_o);
    
    -- Resets 
    vfat2_resets_o <= "11";
    
    -- I2C
    vfat2_sda_0_iobuf : iobuf port map (o => vfat2_sda_i(0), io => vfat2_sda_io(0), i => vfat2_sda_o(0), t => vfat2_sda_t(0));    
    vfat2_sda_1_iobuf : iobuf port map (o => vfat2_sda_i(1), io => vfat2_sda_io(1), i => vfat2_sda_o(1), t => vfat2_sda_t(1));    
    vfat2_sda_2_iobuf : iobuf port map (o => vfat2_sda_i(2), io => vfat2_sda_io(2), i => vfat2_sda_o(2), t => vfat2_sda_t(2));    
    vfat2_sda_3_iobuf : iobuf port map (o => vfat2_sda_i(3), io => vfat2_sda_io(3), i => vfat2_sda_o(3), t => vfat2_sda_t(3));    
    vfat2_sda_4_iobuf : iobuf port map (o => vfat2_sda_i(4), io => vfat2_sda_io(4), i => vfat2_sda_o(4), t => vfat2_sda_t(4));    
    vfat2_sda_5_iobuf : iobuf port map (o => vfat2_sda_i(5), io => vfat2_sda_io(5), i => vfat2_sda_o(5), t => vfat2_sda_t(5));
    
    --================================--
    -- Clocking
    --================================--
    
    -- FPGA clock used to generate the 40 MHz clock to the CDCE and the VFAT2
    fpga_clk_ibufg : ibufg port map(I => fpga_clk_i, O => fpga_clk);
    
    -- PLL used to generate the 40 MHz clock to the CDCE and the VFAT2 
    fpga_clk_pll_inst : entity work.fpga_clk_pll port map(clk50MHz_i => fpga_clk, clk40MHz_o => clk40MHz);    
    
    -- Internal 40 MHz clock
    vfat2_clk_bufg : bufg port map(I => clk40MHz, O => vfat2_clk);
    
    -- External 40 MHz clock to the VFAT2
    vfat2_clk_obufds : obufds port map(I => clk40MHz, O => vfat2_mclk_p_o, OB => vfat2_mclk_n_o);
    
    -- CDCE control
    cdce_primary_clk_obufds : obufds port map(I => clk40MHz, O => cdce_pri_p_o, OB => cdce_pri_n_o);
    cdce_ref_o <= '1';
    cdce_powerdown_o <= '1';
    cdce_sync_o <= '1';
       
    --================================--
    -- GTP
    --================================--

    -- Enable the GTP
    enable_gtp_o <= '1';
    
    -- GTP wrapper instance to ease the use of the optical links
    gtp_wrapper_inst : entity work.gtp_wrapper
    port map(
        gtp_clk_o       => gtp_clk,
        reset_i         => reset,
        rx_error_o      => rx_error,
        rx_kchar_o      => rx_kchar,
        rx_data_o       => rx_data,
        tx_kchar_i      => tx_kchar,
        tx_data_i       => tx_data,
        rx_n_i          => rx_n_i,
        rx_p_i          => rx_p_i,
        tx_n_o          => tx_n_o,
        tx_p_o          => tx_p_o,
        gtp_refclk_n_i  => gtp_refclk_n_i,
        gtp_refclk_p_i  => gtp_refclk_p_i
    );   
    
    --================================--
    -- Tracking Link
    --================================--
    
    link_tracking_1_inst : entity work.link_tracking
    port map(
        gtp_clk_i       => gtp_clk,
        vfat2_clk_i     => vfat2_clk,
        reset_i         => reset,
        rx_error_i      => rx_error(1),
        rx_kchar_i      => rx_kchar(3 downto 2),
        rx_data_i       => rx_data(31 downto 16),
        tx_kchar_o      => tx_kchar(3 downto 2),
        tx_data_o       => tx_data(31 downto 16),
        vfat2_sda_i     => vfat2_sda_i(3 downto 2),
        vfat2_sda_o     => vfat2_sda_o(3 downto 2),
        vfat2_sda_t     => vfat2_sda_t(3 downto 2),
        vfat2_scl_o     => vfat2_scl_o(3 downto 2),
        vfat2_dvalid_i  => vfat2_dvalid_i(3 downto 2),
        vfat2_data_0_i  => vfat2_data_8_i(8),
        vfat2_data_1_i  => vfat2_data_9_i(8),
        vfat2_data_2_i  => vfat2_data_10_i(8),
        vfat2_data_3_i  => vfat2_data_11_i(8),
        vfat2_data_4_i  => vfat2_data_12_i(8),
        vfat2_data_5_i  => vfat2_data_13_i(8),
        vfat2_data_6_i  => vfat2_data_14_i(8),
        vfat2_data_7_i  => vfat2_data_15_i(8)
    );
    
    --================================--
    -- ChipScope
    --================================--
    
    chipscope_icon_inst : entity work.chipscope_icon port map (CONTROL0 => cs_icon0, CONTROL1 => cs_icon1);
    
    chipscope_vio_inst : entity work.chipscope_vio port map (CONTROL => cs_icon0, ASYNC_IN => cs_in, ASYNC_OUT => cs_out);
    
    chipscope_ila_inst : entity work.chipscope_ila port map (CONTROL => cs_icon1, CLK => gtp_clk_i, TRIG0 => cs_ila);
    
    cs_ila <= tx_data(31 downto 16) & rx_data_i(31 downto 16);
       
end Behavioral;