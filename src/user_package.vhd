library ieee;
use ieee.std_logic_1164.all;
 
package user_package is
    
    --=== Package types ==========--
    
    constant def_gtp_idle       : std_logic_vector(7 downto 0) := x"00";  
    constant def_gtp_vi2c       : std_logic_vector(7 downto 0) := x"01";  
    constant def_gtp_tracks     : std_logic_vector(7 downto 0) := x"02";  
    constant def_gtp_regs       : std_logic_vector(7 downto 0) := x"0A";  
    
    constant def_gtp_lv1a       : std_logic_vector(7 downto 0) := x"03";  
    constant def_gtp_calpulse   : std_logic_vector(7 downto 0) := x"04";  
    constant def_gtp_resync     : std_logic_vector(7 downto 0) := x"05";  
    constant def_gtp_bc0        : std_logic_vector(7 downto 0) := x"06"; 
    
    
    --=== Custom types ==========--
    
    type array8x192 is array(7 downto 0) of std_logic_vector(191 downto 0);
    type array128x32 is array(127 downto 0) of std_logic_vector(31 downto 0);
    
end user_package;
   
package body user_package is
end user_package;