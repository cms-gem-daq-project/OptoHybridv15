library ieee;
use ieee.std_logic_1164.all;

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
begin
    

    
end Behavioral;