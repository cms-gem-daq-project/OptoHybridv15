library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library work;
use work.user_package.all;

entity clock_switch is
port(

    fpga_clk_i          : in std_logic;
    
    cdce_pll_locked_i   : in std_logic;
    rec_pll_locked_i    : in std_logic;
    
    vfat2_src_select_o  : out std_logic;
    cdce_src_select_o   : out std_logic;
   
    request_write_o     : out array32(3 downto 0);
    request_tri_o       : out std_logic_vector(3 downto 0);
    request_read_i      : in array32(3 downto 0)

);
end clock_switch;

architecture Behavioral of clock_switch is
    
    signal vfat2_src_select     : std_logic := '0';
    signal cdce_src_select      : std_logic := '0';
    
    signal vfat2_usr_select     : std_logic := '0';
    signal cdce_usr_select      : std_logic := '0';
    
    signal vfat2_allow_reset    : std_logic := '0';
    signal cdce_allow_reset     : std_logic := '0';

begin 

    vfat2_src_select_o <= vfat2_src_select;
    
    vfat2_usr_select <= request_read_i(0)(0);
    
    vfat2_allow_reset <= request_read_i(2)(0);
    
    
    cdce_src_select_o <= cdce_src_select;
    
    cdce_usr_select <= request_read_i(1)(0);
    
    cdce_allow_reset <= request_read_i(3)(0);
 
    --================================--
    -- VFAT2
    --================================--
 
    process(fpga_clk_i)
    begin
    
        if (rising_edge(fpga_clk_i)) then
        
            vfat2_src_select <= vfat2_usr_select;
            
            -- Default : using onboard clock to power VFAT2
            if (vfat2_usr_select = '1') then
                
                request_write_o(0) <= (0 => '0', others => '1');
                
                request_tri_o(0) <= '1';
                
            else
            
                request_tri_o(0) <= '0';
                
            end if;
        
        end if;
   
    end process;

end Behavioral;

