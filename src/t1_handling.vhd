library ieee;
use ieee.std_logic_1164.all;

entity t1_handling is
port(

    gtp_clk_i   : in std_logic;
    vfat2_clk_i : in std_logic;
    reset_i     : in std_logic;
    
    rx_kchar_i  : in std_logic_vector(1 downto 0);
    rx_data_i   : in std_logic_vector(15 downto 0);
    
    t1_o        : out std_logic
    
);
end t1_handling;

architecture Behavioral of t1_handling is

    signal lv1a     : std_logic := '0';
    signal calpulse : std_logic := '0';
    signal resync   : std_logic := '0';
    signal bc0      : std_logic := '0';

begin

    t1_finder_inst : entity work.t1_finder
    port map(
        gtp_clk_i   => gtp_clk_i,
        reset_i     => reset_i,
        rx_kchar_i  => rx_kchar_i,
        rx_data_i   => rx_data_i,
        lv1a_o      => lv1a,
        calpulse_o  => calpulse,
        resync_o    => resync,
        bc0_o       => bc0
    );

    t1_encoder_inst : entity work.t1_encoder
    port map(
        vfat2_clk_i => vfat2_clk_i,
        reset_i     => reset_i,
        lv1a_i      => lv1a,
        calpulse_i  => calpulse,
        resync_i    => resync,
        bc0_i       => bc0,  
        t1_o        => t1_o
    );    
    
end Behavioral;

