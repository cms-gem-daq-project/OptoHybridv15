library ieee;
use ieee.std_logic_1164.all;

library work;
use work.user_package.all;

entity t1_finder is
port(

    gtp_clk_i   : in std_logic;
    reset_i     : in std_logic;

    rx_kchar_i  : in std_logic_vector(1 downto 0);
    rx_data_i   : in std_logic_vector(15 downto 0);

    lv1a_o      : out std_logic;
    calpulse_o  : out std_logic;
    resync_o    : out std_logic;
    bc0_o       : out std_logic

);
end t1_finder;

architecture Behavioral of t1_finder is
begin

    
    process(gtp_clk_i)
        
        variable state      : integer range 0 to 1 := 0; 
        variable counter    : integer range 0 to 7 := 0;
        
    begin    
    
        if (rising_edge(gtp_clk_i)) then
        
            if (reset_i = '1') then
            
                lv1a_o <= '0';
                
                calpulse_o <= '0';
                
                resync_o <= '0';
                
                bc0_o <= '0';
                
                state := 0;    
                
            else
            
                if (state = 0) then
                
                    if (rx_kchar_i = "01") then
                    
                        if (rx_data_i = def_gtp_lv1a & x"BC") then
                        
                            lv1a_o <= '1';
                            
                            counter := 7;
                            
                            state := 1;
                            
                        elsif (rx_data_i = def_gtp_calpulse & x"BC") then
                        
                            calpulse_o <= '1';
                            
                            counter := 7;
                            
                            state := 1;
                            
                        elsif (rx_data_i = def_gtp_resync & x"BC") then
                        
                            resync_o <= '1';
                            
                            counter := 7;
                            
                            state := 1;
                            
                        elsif (rx_data_i = def_gtp_bc0 & x"BC") then
                        
                            bc0_o <= '1';
                            
                            counter := 7;
                            
                            state := 1;
                            
                        end if;
                    
                    end if;
                    
                elsif (state = 1) then
                
                    if (counter = 0) then
            
                        lv1a_o <= '0';
                        
                        calpulse_o <= '0';
                        
                        resync_o <= '0';
                        
                        bc0_o <= '0';
                        
                        state := 0;
                    
                    else
                    
                        counter := counter - 1;
                        
                    end if;
                    
                else
            
                    lv1a_o <= '0';
                    
                    calpulse_o <= '0';
                    
                    resync_o <= '0';
                    
                    bc0_o <= '0';
                    
                    state := 0;    
                
                end if;
            
            end if;
            
        end if;
        
    end process;
    
end Behavioral;

