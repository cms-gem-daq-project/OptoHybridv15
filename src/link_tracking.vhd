library ieee;
use ieee.std_logic_1164.all;

library work;

entity link_tracking is
port(

    -- Clocks and reset
    
    gtp_clk_i       : in std_logic;
    vfat2_clk_i     : in std_logic;
    reset_i         : in std_logic;
    
    -- GTP signals
    
    rx_error_i      : in std_logic;
    rx_kchar_i      : in std_logic_vector(1 downto 0);
    rx_data_i       : in std_logic_vector(15 downto 0);
    
    tx_kchar_o      : out std_logic_vector(1 downto 0);
    tx_data_o       : out std_logic_vector(15 downto 0);
    
    -- IIC signals
    
    sda_i           : in std_logic_vector(1 downto 0); -- 2 IIC sectors
    sda_o           : out std_logic_vector(1 downto 0);
    sda_t           : out std_logic_vector(1 downto 0);
    scl_o           : out std_logic_vector(1 downto 0);
    
    -- VFAT2 data lines
    
    vfat2_dvalid_i  : in std_logic_vector(1 downto 0); -- 2 data valid sectors
    
    vfat2_data_0_i  : in std_logic;
    vfat2_data_1_i  : in std_logic;
    vfat2_data_2_i  : in std_logic;
    vfat2_data_3_i  : in std_logic;
    vfat2_data_4_i  : in std_logic;
    vfat2_data_5_i  : in std_logic;
    vfat2_data_6_i  : in std_logic;
    vfat2_data_7_i  : in std_logic
    
);
end link_tracking;

architecture Behavioral of link_tracking is

    signal en_i : std_logic := '0';
        
    signal chip_select_i       : std_logic_vector(2 downto 0);
    signal register_select_i   : std_logic_vector(7 downto 0);
    signal read_write_n_i      : std_logic;
    signal data_i              : std_logic_vector(7 downto 0);
    
    signal en_o                : std_logic;
    signal status_o            : std_logic;
    signal data_o              : std_logic_vector(7 downto 0);  
    
    
    signal cs_icon              : std_logic_vector(35 downto 0);
    signal cs_in              : std_logic_vector(31 downto 0);
    signal cs_out              : std_logic_vector(31 downto 0);

begin

    i2c_wrapper_inst : entity work.i2c_wrapper
    port map(
        fabric_clk_i        => gtp_clk_i,
        reset_i             => reset_i,
        en_i                => en_i,
        chip_select_i       => chip_select_i,
        register_select_i   => register_select_i,
        read_write_n_i      => read_write_n_i,
        data_i              => data_i,
        en_o                => en_o,
        status_o            => status_o,
        data_o              => data_o,
        selected_iic_i      => 0,
        sda_i               => sda_i,
        sda_o               => sda_o,
        sda_t               => sda_t,
        scl_o               => scl_o
    );
    
    data_i <= cs_out(7 downto 0);
    register_select_i <= cs_out(15 downto 8);
    chip_select_i <= cs_out(18 downto 16);
    read_write_n_i <= cs_out(24);
    
    cs_in(7 downto 0) <= data_o;
    cs_in(8) <= status_o;
    cs_in(9) <= en_o;
    cs_in(31 downto 10) <= (others => '0');
    
    process(gtp_clk_i)
        variable cnt : integer range 0 to 80_000_000 := 0;
    begin
        if (rising_edge(gtp_clk_i)) then
            if (cnt = 80_000_000) then
                cnt := 0;
                en_i <= '1';
            else
                cnt := cnt + 1;
                en_i <= '0';
            end if;
        end if;
    end process;
    
    chipscope_icon_inst : entity work.chipscope_icon
  port map (
    CONTROL0 => cs_icon);
    
    chipscope_vio_inst : entity work.chipscope_vio
  port map (
    CONTROL => cs_icon,
    ASYNC_IN => cs_in,
    ASYNC_OUT => cs_out);

    
end Behavioral;