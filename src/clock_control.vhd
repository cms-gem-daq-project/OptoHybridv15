library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library work;
use work.user_package.all;

entity clock_control is
port(

    fpga_clk_i          : in std_logic;
    vfat2_clk_fpga_i    : in std_logic;
    vfat2_clk_ext_i     : in std_logic;
    cdce_clk_rec_i      : in std_logic;
    
    fpga_pll_locked_i   : in std_logic;
    ext_pll_locked_i    : in std_logic;
    rec_pll_locked_i    : in std_logic;
    cdce_pll_locked_i   : in std_logic;
    
    vfat2_clk_o         : out std_logic;
    cdce_clk_o          : out std_logic;
   
    request_write_o     : out array32(3 downto 0);
    request_tri_o       : out std_logic_vector(3 downto 0);
    request_read_i      : in array32(3 downto 0)

);
end clock_control;

architecture Behavioral of clock_control is
begin 
    
    vfat2_clk_o <= vfat2_clk_fpga_i when request_read_i(0)(0) = '0' else '0';
    
    cdce_clk_o <= vfat2_clk_fpga_i when request_read_i(1)(0) = '0' else '0';

end Behavioral;

