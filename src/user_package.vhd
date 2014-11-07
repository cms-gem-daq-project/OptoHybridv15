library ieee;
use ieee.std_logic_1164.all;
 
package user_package is
    
    --=== Package types ==========--
    
    constant def_gtp_idle   : std_logic_vector(7 downto 0) := x"00";  
    constant def_gtp_vi2c   : std_logic_vector(7 downto 0) := x"01";  
    constant def_gtp_regs   : std_logic_vector(7 downto 0) := x"02";  
    constant def_gtp_tracks : std_logic_vector(7 downto 0) := x"03";  
    
    --=== Custom types ==========--
    
    type array8x192 is array(7 downto 0) of std_logic_vector(191 downto 0);
    
	--=== Registers ===========--
    
    constant register_count : integer := 128;
    
	type registers_array is array((register_count - 1) downto 0) of std_logic_vector(31 downto 0);

	type registers_rbus is
	record
		data 	: registers_array;
	end record;

	type registers_wbus is
	record
		en 		: std_logic_vector((register_count - 1) downto 0);
		data 	: registers_array;
	end record;
    
end user_package;
   
package body user_package is
end user_package;