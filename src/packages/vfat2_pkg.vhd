library ieee;
use ieee.std_logic_1164.all;

package vfat2_pkg is

    type vfat2_data_t is record
        data        : std_logic_vector(8 downto 0);
    end record;
    
    type vfat2s_data_t is array (integer range <>) of vfat2_data_t;

end vfat2_pkg;

package body vfat2_pkg is 
end vfat2_pkg;
