library ieee;
use ieee.std_logic_1164.all;

library work;
use work.user_package.all;

entity adc_handler is
port(

    fabric_clk_i    : in std_logic;
    reset_i         : in std_logic;
    
    uart_rx_i       : in std_logic;

    voltage_o       : out std_logic_vector(31 downto 0);
    current_o       : out std_logic_vector(31 downto 0)

);
end adc_handler;

architecture Behavioral of adc_handler is

    -- UART
    
    signal uart_en      : std_logic := '0';
    signal uart_data    : std_logic_vector(7 downto 0) := (others => '0');


    -- ChipScope signals

    signal cs_icon0                 : std_logic_vector(35 downto 0);
    signal cs_icon1                 : std_logic_vector(35 downto 0);
    signal cs_in                    : std_logic_vector(31 downto 0);
    signal cs_out                   : std_logic_vector(31 downto 0);
    signal cs_ila0                  : std_logic_vector(31 downto 0);
    signal cs_ila1                  : std_logic_vector(31 downto 0);
    
begin

    uart_rx_inst : entity work.uart_rx
    port map(
        fabric_clk_i    => fabric_clk_i,
        reset_i         => reset_i,
        uart_rx_i       => uart_rx_i,
        en_o            => uart_en,
        data_o          => uart_data
    );
    
    adc_switch_inst : entity work.adc_switch
    port map(
        fabric_clk_i    => fabric_clk_i,
        reset_i         => reset_i,
        uart_en_i       => uart_en,
        uart_data_i     => uart_data,
        voltage_o       => voltage_o,
        current_o       => current_o
    );

    --================================--
    -- ChipScope
    --================================--

    chipscope_icon_inst : entity work.chipscope_icon port map (CONTROL0 => cs_icon0, CONTROL1 => cs_icon1);

    chipscope_vio_inst : entity work.chipscope_vio port map (CONTROL => cs_icon0, ASYNC_IN => cs_in, ASYNC_OUT => cs_out);

    chipscope_ila_inst : entity work.chipscope_ila port map (CONTROL => cs_icon1, CLK => fabric_clk_i, TRIG0 => cs_ila0, TRIG1 => cs_ila1);

    cs_ila0 <= (others => '0');
    cs_ila1 <= x"0000" & uart_data & "0000000" & uart_en;

end Behavioral;
