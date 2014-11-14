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
    
        variable state  : integer range 0 to 255 := 0;
    
    begin
    
        if (rising_edge(fpga_clk_i)) then
        
            if (vfat2_allow_reset = '0') then
            
                request_tri_o(0) <= '0';
            
                vfat2_src_select <= vfat2_usr_select;
                
                state := 0;
                
            else
            
                -- Default : using onboard clock to power VFAT2
                if (vfat2_src_select = '0') then
                    
                    request_tri_o(0) <= '0';
                            
                    -- User requests that we switch to exterior clock
                    if (vfat2_usr_select = '1') then
                    
                        vfat2_src_select <= '1';
                    
                    end if;
                    
                    state := 0;
            
                -- Using external clock to power VFAT2
                else
                
                    -- If the VFAT2 clock is used to power the CDCE and that it doesn't lock (bad input clock), reset it after a while
                    if (cdce_src_select = '0' and cdce_pll_locked_i = '0') then
                    
                        if (state = 255) then
                        
                            vfat2_src_select <= '0';
                            
                            request_write_o(0) <= (others => '0');
                            
                            request_tri_o(0) <= '1';
                            
                            state := 0;
                            
                        else
                        
                            request_tri_o(0) <= '0';
                        
                            state := state + 1;
                            
                        end if;
                        
                    else
                    
                        request_tri_o(0) <= '0';
                    
                        state := 0;
                        
                    end if;
                    
                end if;
                    
            end if;
        
        end if;
   
    end process;

end Behavioral;

