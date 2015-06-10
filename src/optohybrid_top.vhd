----------------------------------------------------------------------------------
-- Company:        IIHE - ULB
-- Engineer:       Thomas Lenzi (thomas.lenzi@cern.ch)
-- 
-- Create Date:    13:13:21 03/12/2015 
-- Design Name:    OptoHybrid v2
-- Module Name:    optohybrid_top - Behavioral 
-- Project Name:   OptoHybrid v2
-- Target Devices: xc6vlx130t-1ff1156
-- Tool versions:  ISE  P.20131013
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

library work;
use work.vfat2_pkg.all;
use work.user_package.all;

entity optohybrid_top is
port(

    --== VFAT2s Control ==--
    
    vfat2_mclk_p_o          : out std_logic_vector(2 downto 0);
    vfat2_mclk_n_o          : out std_logic_vector(2 downto 0);
    
    vfat2_resb_o            : out std_logic_vector(2 downto 0);
    vfat2_resh_o            : out std_logic_vector(2 downto 0);
    
    vfat2_t1_p_o            : out std_logic_vector(2 downto 0);
    vfat2_t1_n_o            : out std_logic_vector(2 downto 0);
    
    vfat2_scl_o             : out std_logic_vector(5 downto 0);
    vfat2_sda_io            : inout std_logic_vector(5 downto 0);
    
    vfat2_data_valid_p_i    : in std_logic_vector(5 downto 0);
    vfat2_data_valid_n_i    : in std_logic_vector(5 downto 0);
    
    --== VFAT2s Data ==--
    
    vfat2_0_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_0_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_0_data_out_p_i    : in std_logic;
    vfat2_0_data_out_n_i    : in std_logic;

    vfat2_1_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_1_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_1_data_out_p_i    : in std_logic;
    vfat2_1_data_out_n_i    : in std_logic;

    vfat2_2_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_2_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_2_data_out_p_i    : in std_logic;
    vfat2_2_data_out_n_i    : in std_logic;

    vfat2_3_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_3_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_3_data_out_p_i    : in std_logic;
    vfat2_3_data_out_n_i    : in std_logic;

    vfat2_4_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_4_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_4_data_out_p_i    : in std_logic;
    vfat2_4_data_out_n_i    : in std_logic;

    vfat2_5_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_5_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_5_data_out_p_i    : in std_logic;
    vfat2_5_data_out_n_i    : in std_logic;

    vfat2_6_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_6_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_6_data_out_p_i    : in std_logic;
    vfat2_6_data_out_n_i    : in std_logic;

    vfat2_7_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_7_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_7_data_out_p_i    : in std_logic;
    vfat2_7_data_out_n_i    : in std_logic;

    vfat2_8_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_8_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_8_data_out_p_i    : in std_logic;
    vfat2_8_data_out_n_i    : in std_logic;

    vfat2_9_sbits_p_i       : in std_logic_vector(7 downto 0);
    vfat2_9_sbits_n_i       : in std_logic_vector(7 downto 0);
    vfat2_9_data_out_p_i    : in std_logic;
    vfat2_9_data_out_n_i    : in std_logic;

    vfat2_10_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_10_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_10_data_out_p_i   : in std_logic;
    vfat2_10_data_out_n_i   : in std_logic;
    
    vfat2_11_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_11_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_11_data_out_p_i   : in std_logic;
    vfat2_11_data_out_n_i   : in std_logic;

    vfat2_12_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_12_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_12_data_out_p_i   : in std_logic;
    vfat2_12_data_out_n_i   : in std_logic;

    vfat2_13_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_13_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_13_data_out_p_i   : in std_logic;
    vfat2_13_data_out_n_i   : in std_logic;

    vfat2_14_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_14_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_14_data_out_p_i   : in std_logic;
    vfat2_14_data_out_n_i   : in std_logic;

    vfat2_15_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_15_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_15_data_out_p_i   : in std_logic;
    vfat2_15_data_out_n_i   : in std_logic;

    vfat2_16_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_16_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_16_data_out_p_i   : in std_logic;
    vfat2_16_data_out_n_i   : in std_logic;

    vfat2_17_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_17_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_17_data_out_p_i   : in std_logic;
    vfat2_17_data_out_n_i   : in std_logic;

    vfat2_18_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_18_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_18_data_out_p_i   : in std_logic;
    vfat2_18_data_out_n_i   : in std_logic;

    vfat2_19_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_19_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_19_data_out_p_i   : in std_logic;
    vfat2_19_data_out_n_i   : in std_logic;

    vfat2_20_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_20_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_20_data_out_p_i   : in std_logic;
    vfat2_20_data_out_n_i   : in std_logic;

    vfat2_21_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_21_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_21_data_out_p_i   : in std_logic;
    vfat2_21_data_out_n_i   : in std_logic;

    vfat2_22_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_22_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_22_data_out_p_i   : in std_logic;
    vfat2_22_data_out_n_i   : in std_logic;

    vfat2_23_sbits_p_i      : in std_logic_vector(7 downto 0);
    vfat2_23_sbits_n_i      : in std_logic_vector(7 downto 0);
    vfat2_23_data_out_p_i   : in std_logic;
    vfat2_23_data_out_n_i   : in std_logic;
    
    --== Clocking ==--
    
    clk_50MHz_i             : in std_logic;

    cdce_ref_o              : out std_logic;
    cdce_pwrdown_o          : out std_logic;
    cdce_sync_o             : out std_logic;
    cdce_locked_i           : in std_logic;
    cdce_le_o               : out std_logic;
    cdce_clk_p_i            : in std_logic;
    cdce_clk_n_i            : in std_logic;
    cdce_pri_p_o            : out std_logic;
    cdce_pri_n_o            : out std_logic;
    
    --== GTX ==--
    
    mgt_112_clk0_p_i        : in std_logic;
    mgt_112_clk0_n_i        : in std_logic;
    
    mgt_112_rx_p_i          : in std_logic_vector(3 downto 0);
    mgt_112_rx_n_i          : in std_logic_vector(3 downto 0);
    mgt_112_tx_p_o          : out std_logic_vector(3 downto 0);
    mgt_112_tx_n_o          : out std_logic_vector(3 downto 0);
    
    tmds_d_p_io             : in std_logic_vector(1 downto 0)

);
end optohybrid_top;

architecture Behavioral of optohybrid_top is

    --== Global ==--
    
    signal reset                : std_logic;

    --== VFAT2 signals ==--

    signal vfat2_mclk           : std_logic; 
    signal vfat2_reset          : std_logic; 
    signal vfat2_t1             : std_logic; 
    signal vfat2_scl            : std_logic_vector(5 downto 0); 
    signal vfat2_sda_out        : std_logic_vector(5 downto 0); 
    signal vfat2_sda_in         : std_logic_vector(5 downto 0); 
    signal vfat2_sda_tri        : std_logic_vector(5 downto 0); 
    signal vfat2_data_valid     : std_logic_vector(5 downto 0); 
    signal vfat2_data           : vfat2s_data_t(23 downto 0);
    
    --== Clocking ==--
    
    signal clk_50MHz            : std_logic;
    signal clk_40MHz            : std_logic;
    signal clk_160MHz           : std_logic;
    signal clk_40MHz_ext        : std_logic;
    signal clk_160MHz_ext       : std_logic;
    signal gtx_ref_clk          : std_logic;
    signal pll_locked           : std_logic;
    
    --== GTX ==--
    
    signal gtp_reset            : std_logic_vector(3 downto 0) := (others => '0');
    signal gtx_clk              : std_logic := '0';
    signal rx_error             : std_logic_vector(3 downto 0);
    signal rx_kchar             : std_logic_vector(7 downto 0);
    signal rx_data              : std_logic_vector(63 downto 0);
    signal tx_kchar             : std_logic_vector(7 downto 0);
    signal tx_data              : std_logic_vector(63 downto 0);    
    
    --== Old ==--
    
    signal vfat2_clk_ext                : std_logic := '0';
    signal ext_lv1a                     : std_logic := '0';
    signal ext_sbits                    : std_logic := '0';
    
    -- Clocking
   
    signal vfat2_src_select             : std_logic := '0';
    signal vfat2_fallback               : std_logic := '0';
    signal vfat2_reset_src              : std_logic := '0';
    
    signal cdce_src_select              : std_logic_vector(1 downto 0) := (others => '0');
    signal cdce_fallback                : std_logic := '0';
    signal cdce_reset_src               : std_logic := '0';
 
    -- Registers requests
    
    signal request_write_0              : array32(63 downto 0) := (others => (others => '0'));
    signal request_tri_0                : std_logic_vector(63 downto 0);
    
    signal request_write_1              : array32(63 downto 0) := (others => (others => '0'));
    signal request_tri_1                : std_logic_vector(63 downto 0);
    
    signal request_write                : array32(63 downto 0) := (others => (others => '0'));
    signal request_tri                  : std_logic_vector(63 downto 0);
    signal request_read                 : array32(63 downto 0) := (others => (others => '0'));
    
    -- Sbits
   
    signal sbits_configuration          : std_logic_vector(2 downto 0) := (others => '0');
    
    -- T1 signals
    
    signal delayed_enable               : std_logic := '0';
    signal delayed_configuration        : std_logic_vector(31 downto 0) := (others => '0');
    signal delayed_lv1a                 : std_logic := '0';
    signal delayed_calpulse             : std_logic := '0';
    
    signal req_lv1a                     : std_logic := '0';
    signal req_calpulse                 : std_logic := '0';
    signal req_resync                   : std_logic := '0';
    signal req_bc0                      : std_logic := '0';
    
    signal trigger_configuration        : std_logic_vector(1 downto 0) := (others => '0');
    
    signal t1_lv1a                      : std_logic := '0';
    signal t1_calpulse                  : std_logic := '0';
    signal t1_resync                    : std_logic := '0';
    signal t1_bc0                       : std_logic := '0';
    
    -- ADC
    
    signal adc_voltage_value            : std_logic_vector(31 downto 0) := (others => '0');
    signal adc_current_value            : std_logic_vector(31 downto 0) := (others => '0');

    -- Counters

    signal ext_lv1a_counter             : std_logic_vector(31 downto 0) := (others => '0');
    signal int_lv1a_counter             : std_logic_vector(31 downto 0) := (others => '0');
    signal del_lv1a_counter             : std_logic_vector(31 downto 0) := (others => '0');
    signal lv1a_counter                 : std_logic_vector(31 downto 0) := (others => '0');
    signal int_calpulse_counter         : std_logic_vector(31 downto 0) := (others => '0');
    signal del_calpulse_counter         : std_logic_vector(31 downto 0) := (others => '0');
    signal calpulse_counter             : std_logic_vector(31 downto 0) := (others => '0');
    signal resync_counter               : std_logic_vector(31 downto 0) := (others => '0');
    signal bc0_counter                  : std_logic_vector(31 downto 0) := (others => '0');
    signal bx_x4_counter                : std_logic_vector(31 downto 0) := (others => '0');
    signal bx_counter                   : std_logic_vector(31 downto 0) := (others => '0');
    
    signal ext_lv1a_counter_reset       : std_logic := '0';
    signal int_lv1a_counter_reset       : std_logic := '0';
    signal del_lv1a_counter_reset       : std_logic := '0';
    signal lv1a_counter_reset           : std_logic := '0';
    signal int_calpulse_counter_reset   : std_logic := '0';
    signal del_calpulse_counter_reset   : std_logic := '0';
    signal calpulse_counter_reset       : std_logic := '0';
    signal resync_counter_reset         : std_logic := '0';
    signal bc0_counter_reset            : std_logic := '0';
    signal bx_counter_reset             : std_logic := '0';
    
    -- ChipScope signals

    signal cs_icon0                 : std_logic_vector(35 downto 0) := (others => '0');
    signal cs_icon1                 : std_logic_vector(35 downto 0) := (others => '0');
    
    signal cs_async_in              : std_logic_vector(15 downto 0) := (others => '0');
    signal cs_async_out             : std_logic_vector(15 downto 0) := (others => '0');
    signal cs_sync_in               : std_logic_vector(15 downto 0) := (others => '0');
    signal cs_sync_out              : std_logic_vector(15 downto 0) := (others => '0');
    
    signal cs_ila0                  : std_logic_vector(31 downto 0);
    signal cs_ila1                  : std_logic_vector(31 downto 0);
    signal cs_ila2                  : std_logic_vector(31 downto 0);
    signal cs_ila3                  : std_logic_vector(31 downto 0);
    
begin

    reset <= '0';

    --== VFAT2 buffers ==--
    
    vfat2_buffers_inst : entity work.vfat2_buffers
    port map(
        --
        vfat2_mclk_p_o          => vfat2_mclk_p_o,
        vfat2_mclk_n_o          => vfat2_mclk_n_o,
        vfat2_resb_o            => vfat2_resb_o,
        vfat2_resh_o            => vfat2_resh_o,
        vfat2_t1_p_o            => vfat2_t1_p_o,
        vfat2_t1_n_o            => vfat2_t1_n_o,
        vfat2_scl_o             => vfat2_scl_o,
        vfat2_sda_io            => vfat2_sda_io,
        vfat2_data_valid_p_i    => vfat2_data_valid_p_i,
        vfat2_data_valid_n_i    => vfat2_data_valid_n_i,
        --
        vfat2_mclk_i            => vfat2_mclk,
        vfat2_reset_i           => vfat2_reset,
        vfat2_t1_i              => vfat2_t1,
        vfat2_scl_i             => vfat2_scl,
        vfat2_sda_i             => vfat2_sda_out,
        vfat2_sda_o             => vfat2_sda_in, 
        vfat2_sda_t             => vfat2_sda_tri,
        vfat2_data_valid_o      => vfat2_data_valid,
        --
        vfat2_0_sbits_p_i		=> vfat2_0_sbits_p_i,
        vfat2_0_sbits_n_i		=> vfat2_0_sbits_n_i,
        vfat2_0_data_out_p_i	=> vfat2_0_data_out_p_i,
        vfat2_0_data_out_n_i	=> vfat2_0_data_out_n_i,
        vfat2_1_sbits_p_i		=> vfat2_1_sbits_p_i,
        vfat2_1_sbits_n_i		=> vfat2_1_sbits_n_i,
        vfat2_1_data_out_p_i	=> vfat2_1_data_out_p_i,
        vfat2_1_data_out_n_i	=> vfat2_1_data_out_n_i,
        vfat2_2_sbits_p_i		=> vfat2_2_sbits_p_i,
        vfat2_2_sbits_n_i		=> vfat2_2_sbits_n_i,
        vfat2_2_data_out_p_i	=> vfat2_2_data_out_p_i,
        vfat2_2_data_out_n_i	=> vfat2_2_data_out_n_i,
        vfat2_3_sbits_p_i		=> vfat2_3_sbits_p_i,
        vfat2_3_sbits_n_i		=> vfat2_3_sbits_n_i,
        vfat2_3_data_out_p_i	=> vfat2_3_data_out_p_i,
        vfat2_3_data_out_n_i	=> vfat2_3_data_out_n_i,
        vfat2_4_sbits_p_i		=> vfat2_4_sbits_p_i,
        vfat2_4_sbits_n_i		=> vfat2_4_sbits_n_i,
        vfat2_4_data_out_p_i	=> vfat2_4_data_out_p_i,
        vfat2_4_data_out_n_i	=> vfat2_4_data_out_n_i,
        vfat2_5_sbits_p_i		=> vfat2_5_sbits_p_i,
        vfat2_5_sbits_n_i		=> vfat2_5_sbits_n_i,
        vfat2_5_data_out_p_i	=> vfat2_5_data_out_p_i,
        vfat2_5_data_out_n_i	=> vfat2_5_data_out_n_i,
        vfat2_6_sbits_p_i		=> vfat2_6_sbits_p_i,
        vfat2_6_sbits_n_i		=> vfat2_6_sbits_n_i,
        vfat2_6_data_out_p_i	=> vfat2_6_data_out_p_i,
        vfat2_6_data_out_n_i	=> vfat2_6_data_out_n_i,
        vfat2_7_sbits_p_i		=> vfat2_7_sbits_p_i,
        vfat2_7_sbits_n_i		=> vfat2_7_sbits_n_i,
        vfat2_7_data_out_p_i	=> vfat2_7_data_out_p_i,
        vfat2_7_data_out_n_i	=> vfat2_7_data_out_n_i,
        vfat2_8_sbits_p_i		=> vfat2_8_sbits_p_i,
        vfat2_8_sbits_n_i		=> vfat2_8_sbits_n_i,
        vfat2_8_data_out_p_i	=> vfat2_8_data_out_p_i,
        vfat2_8_data_out_n_i	=> vfat2_8_data_out_n_i,
        vfat2_9_sbits_p_i		=> vfat2_9_sbits_p_i,
        vfat2_9_sbits_n_i		=> vfat2_9_sbits_n_i,
        vfat2_9_data_out_p_i	=> vfat2_9_data_out_p_i,
        vfat2_9_data_out_n_i	=> vfat2_9_data_out_n_i,
        vfat2_10_sbits_p_i		=> vfat2_10_sbits_p_i,
        vfat2_10_sbits_n_i		=> vfat2_10_sbits_n_i,
        vfat2_10_data_out_p_i	=> vfat2_10_data_out_p_i,
        vfat2_10_data_out_n_i	=> vfat2_10_data_out_n_i,
        vfat2_11_sbits_p_i		=> vfat2_11_sbits_p_i,
        vfat2_11_sbits_n_i		=> vfat2_11_sbits_n_i,
        vfat2_11_data_out_p_i	=> vfat2_11_data_out_p_i,
        vfat2_11_data_out_n_i	=> vfat2_11_data_out_n_i,
        vfat2_12_sbits_p_i		=> vfat2_12_sbits_p_i,
        vfat2_12_sbits_n_i		=> vfat2_12_sbits_n_i,
        vfat2_12_data_out_p_i	=> vfat2_12_data_out_p_i,
        vfat2_12_data_out_n_i	=> vfat2_12_data_out_n_i,
        vfat2_13_sbits_p_i		=> vfat2_13_sbits_p_i,
        vfat2_13_sbits_n_i		=> vfat2_13_sbits_n_i,
        vfat2_13_data_out_p_i	=> vfat2_13_data_out_p_i,
        vfat2_13_data_out_n_i	=> vfat2_13_data_out_n_i,
        vfat2_14_sbits_p_i		=> vfat2_14_sbits_p_i,
        vfat2_14_sbits_n_i		=> vfat2_14_sbits_n_i,
        vfat2_14_data_out_p_i	=> vfat2_14_data_out_p_i,
        vfat2_14_data_out_n_i	=> vfat2_14_data_out_n_i,
        vfat2_15_sbits_p_i		=> vfat2_15_sbits_p_i,
        vfat2_15_sbits_n_i		=> vfat2_15_sbits_n_i,
        vfat2_15_data_out_p_i	=> vfat2_15_data_out_p_i,
        vfat2_15_data_out_n_i	=> vfat2_15_data_out_n_i,
        vfat2_16_sbits_p_i		=> vfat2_16_sbits_p_i,
        vfat2_16_sbits_n_i		=> vfat2_16_sbits_n_i,
        vfat2_16_data_out_p_i	=> vfat2_16_data_out_p_i,
        vfat2_16_data_out_n_i	=> vfat2_16_data_out_n_i,
        vfat2_17_sbits_p_i		=> vfat2_17_sbits_p_i,
        vfat2_17_sbits_n_i		=> vfat2_17_sbits_n_i,
        vfat2_17_data_out_p_i	=> vfat2_17_data_out_p_i,
        vfat2_17_data_out_n_i	=> vfat2_17_data_out_n_i,
        vfat2_18_sbits_p_i		=> vfat2_18_sbits_p_i,
        vfat2_18_sbits_n_i		=> vfat2_18_sbits_n_i,
        vfat2_18_data_out_p_i	=> vfat2_18_data_out_p_i,
        vfat2_18_data_out_n_i	=> vfat2_18_data_out_n_i,
        vfat2_19_sbits_p_i		=> vfat2_19_sbits_p_i,
        vfat2_19_sbits_n_i		=> vfat2_19_sbits_n_i,
        vfat2_19_data_out_p_i	=> vfat2_19_data_out_p_i,
        vfat2_19_data_out_n_i	=> vfat2_19_data_out_n_i,
        vfat2_20_sbits_p_i		=> vfat2_20_sbits_p_i,
        vfat2_20_sbits_n_i		=> vfat2_20_sbits_n_i,
        vfat2_20_data_out_p_i	=> vfat2_20_data_out_p_i,
        vfat2_20_data_out_n_i	=> vfat2_20_data_out_n_i,
        vfat2_21_sbits_p_i		=> vfat2_21_sbits_p_i,
        vfat2_21_sbits_n_i		=> vfat2_21_sbits_n_i,
        vfat2_21_data_out_p_i	=> vfat2_21_data_out_p_i,
        vfat2_21_data_out_n_i	=> vfat2_21_data_out_n_i,
        vfat2_22_sbits_p_i		=> vfat2_22_sbits_p_i,
        vfat2_22_sbits_n_i		=> vfat2_22_sbits_n_i,
        vfat2_22_data_out_p_i	=> vfat2_22_data_out_p_i,
        vfat2_22_data_out_n_i	=> vfat2_22_data_out_n_i,
        vfat2_23_sbits_p_i		=> vfat2_23_sbits_p_i,
        vfat2_23_sbits_n_i		=> vfat2_23_sbits_n_i,
        vfat2_23_data_out_p_i	=> vfat2_23_data_out_p_i,
        vfat2_23_data_out_n_i	=> vfat2_23_data_out_n_i,
        --
        vfat2s_data_o           => vfat2_data
    );
    
    --== Clocking & Reset : PLL & CDCE & VFAT2 ==--
    
    pll_inst : entity work.clk_wiz_v3_6
    port map(
        clk_50Mhz_i     => clk_50Mhz_i,
        clk_50Mhz_o     => clk_50Mhz,
        clk_40Mhz_o     => clk_40Mhz,
        clk_160Mhz_o    => clk_160Mhz,
        pll_locked_o    => pll_locked
    );    
    
--    pll_ext : entity work.ext_pll
--    port map(
--        clk_40MHz_i     => tmds_d_p_io(0), 
--        clk_40MHz_o     => clk_40MHz_ext,
--        clk_160MHz_o    => clk_160MHz_ext,
--        locked_o        => pll_locked
--    );    
    
--    vfat2_mclk <= clk_40MHz_ext;
--    gtx_ref_clk <= clk_160MHz_ext;

    vfat2_mclk <= clk_40MHz;
    gtx_ref_clk <= clk_160MHz;
   
    cdce_primary_clk_obufds : obufds port map(i => vfat2_mclk, o => cdce_pri_p_o, ob => cdce_pri_n_o);
    
    cdce_ref_o <= '1';
    cdce_pwrdown_o <= pll_locked;
    cdce_sync_o <= '1';
    cdce_le_o <= '1';        
                  
    vfat2_reset <= reset;

    --== GTX ==--
    
    gtx_clk_inst : ibufds_gtxe1 port map(o => open, odiv2 => open, ceb => '0', i => mgt_112_clk0_p_i, ib => mgt_112_clk0_n_i);  
    
    gtx_wrapper_inst : entity work.gtx_wrapper
    port map(
        gtx_clk_o       => gtx_clk,
        reset_i         => gtp_reset(0),
        rx_error_o      => rx_error,
        rx_kchar_o      => rx_kchar,
        rx_data_o       => rx_data,
        rx_n_i          => mgt_112_rx_n_i,
        rx_p_i          => mgt_112_rx_p_i,
        tx_kchar_i      => tx_kchar,
        tx_data_i       => tx_data,
        tx_n_o          => mgt_112_tx_n_o,
        tx_p_o          => mgt_112_tx_p_o,
        gtx_clk         => gtx_ref_clk
    );
    
    --== Links ==--
    
    link_tracking_0_inst : entity work.link_tracking
    port map(
        gtp_clk_i       => gtx_clk,
        vfat2_clk_i     => vfat2_mclk,
        reset_i         => reset,
        rx_error_i      => rx_error(0),
        rx_kchar_i      => rx_kchar(1 downto 0),
        rx_data_i       => rx_data(15 downto 0),
        tx_kchar_o      => tx_kchar(1 downto 0),
        tx_data_o       => tx_data(15 downto 0),
        request_write_o => request_write_0,
        request_tri_o   => request_tri_0,
        request_read_i  => request_read,
        lv1a_sent_i     => t1_lv1a,
        bx_counter_i    => bx_counter,
        vfat2_sda_i     => vfat2_sda_in(1 downto 0),
        vfat2_sda_o     => vfat2_sda_out(1 downto 0),
        vfat2_sda_t     => vfat2_sda_tri(1 downto 0),
        vfat2_scl_o     => vfat2_scl(1 downto 0),
        vfat2_dvalid_i  => vfat2_data_valid(1 downto 0),
        vfat2_data_0_i  => vfat2_data(0).data_out,
        vfat2_data_1_i  => vfat2_data(1).data_out,
        vfat2_data_2_i  => vfat2_data(2).data_out,
        vfat2_data_3_i  => vfat2_data(3).data_out,
        vfat2_data_4_i  => vfat2_data(4).data_out,
        vfat2_data_5_i  => vfat2_data(5).data_out,
        vfat2_data_6_i  => vfat2_data(6).data_out,
        vfat2_data_7_i  => vfat2_data(7).data_out
    );
    
    link_tracking_2_inst : entity work.link_tracking
    port map(
        gtp_clk_i       => gtx_clk,
        vfat2_clk_i     => vfat2_mclk,
        reset_i         => reset,
        rx_error_i      => rx_error(3),
        rx_kchar_i      => rx_kchar(5 downto 4),
        rx_data_i       => rx_data(47 downto 32),
        tx_kchar_o      => tx_kchar(5 downto 4),
        tx_data_o       => tx_data(47 downto 32),
        request_write_o => request_write_1,
        request_tri_o   => request_tri_1,
        request_read_i  => request_read,
        lv1a_sent_i     => t1_lv1a,
        bx_counter_i    => bx_counter,
        vfat2_sda_i     => vfat2_sda_in(5 downto 4),
        vfat2_sda_o     => vfat2_sda_out(5 downto 4),
        vfat2_sda_t     => vfat2_sda_tri(5 downto 4),
        vfat2_scl_o     => vfat2_scl(5 downto 4),
        vfat2_dvalid_i  => vfat2_data_valid(5 downto 4),
        vfat2_data_0_i  => vfat2_data(16).data_out,
        vfat2_data_1_i  => vfat2_data(17).data_out,
        vfat2_data_2_i  => vfat2_data(18).data_out,
        vfat2_data_3_i  => vfat2_data(19).data_out,
        vfat2_data_4_i  => vfat2_data(20).data_out,
        vfat2_data_5_i  => vfat2_data(21).data_out,
        vfat2_data_6_i  => vfat2_data(22).data_out,
        vfat2_data_7_i  => vfat2_data(23).data_out
    );    
    
    requests: for I in 0 to 63 generate
    begin
        request_tri(I) <= request_tri_0(I) or request_tri_1(I);
        request_write(I) <= request_write_0(I) when request_tri_0(I) = '1' else request_write_1(I);
    end generate;
    
--    link_trigger_inst : entity work.link_trigger
--    port map(
--        gtp_clk_i       => gtx_clk,
--        vfat2_clk_i     => vfat2_mclk,
--        reset_i         => reset,
--        rx_error_i      => rx_error(3),
--        rx_kchar_i      => rx_kchar(5 downto 4),
--        rx_data_i       => rx_data(47 downto 32),
--        tx_kchar_o      => tx_kchar(5 downto 4),
--        tx_data_o       => tx_data(47 downto 32),
--        bx_counter_i    => bx_counter,
--        vfat2_data_0_i  => vfat2_data(0).data(7 downto 0),
--        vfat2_data_1_i  => vfat2_data(1).data(7 downto 0),
--        vfat2_data_2_i  => vfat2_data(2).data(7 downto 0),
--        vfat2_data_3_i  => vfat2_data(3).data(7 downto 0),
--        vfat2_data_4_i  => vfat2_data(4).data(7 downto 0),
--        vfat2_data_5_i  => vfat2_data(5).data(7 downto 0),
--        vfat2_data_6_i  => vfat2_data(6).data(7 downto 0),
--        vfat2_data_7_i  => vfat2_data(7).data(7 downto 0),
--        vfat2_data_8_i  => vfat2_data(8).data(7 downto 0),
--        vfat2_data_9_i  => vfat2_data(9).data(7 downto 0),
--        vfat2_data_10_i => vfat2_data(10).data(7 downto 0),
--        vfat2_data_11_i => vfat2_data(11).data(7 downto 0),
--        vfat2_data_12_i => vfat2_data(12).data(7 downto 0),
--        vfat2_data_13_i => vfat2_data(13).data(7 downto 0),
--        vfat2_data_14_i => vfat2_data(14).data(7 downto 0),
--        vfat2_data_15_i => vfat2_data(15).data(7 downto 0),
--        vfat2_data_16_i => vfat2_data(16).data(7 downto 0),
--        vfat2_data_17_i => vfat2_data(17).data(7 downto 0),
--        vfat2_data_18_i => vfat2_data(18).data(7 downto 0),
--        vfat2_data_19_i => vfat2_data(19).data(7 downto 0),
--        vfat2_data_20_i => vfat2_data(20).data(7 downto 0),
--        vfat2_data_21_i => vfat2_data(21).data(7 downto 0),
--        vfat2_data_22_i => vfat2_data(22).data(7 downto 0),
--        vfat2_data_23_i => vfat2_data(23).data(7 downto 0)
--    );    


    --================================--
    -- T1 handling
    --================================--
    
    t1_delayed_inst : entity work.t1_delayed
    port map(
        fabric_clk_i    => gtx_clk,
        reset_i         => reset,
        en_i            => delayed_enable,
        delay_i         => delayed_configuration, 
        lv1a_o          => delayed_lv1a,
        calpulse_o      => delayed_calpulse
    );
        
    trigger_handler_inst : entity work.trigger_handler
    port map(
        fabric_clk_i        => gtx_clk,
        reset_i             => reset,
        req_trigger_i       => req_lv1a,
        delayed_trigger_i   => delayed_lv1a,
        ext_trigger_i       => '0',
        trigger_config_i    => trigger_configuration,
        lv1a_o              => t1_lv1a
    );
    
    t1_calpulse <= req_calpulse or delayed_calpulse;
    
    t1_resync <= req_resync;
    
    t1_bc0 <= req_bc0;

    t1_handler_inst : entity work.t1_handler 
    port map(
        fabric_clk_i    => gtx_clk,
        vfat2_clk_i     => vfat2_mclk,
        reset_i         => reset,
        lv1a_i          => t1_lv1a,
        calpulse_i      => t1_calpulse,
        resync_i        => t1_resync,
        bc0_i           => t1_bc0,
        t1_o            => vfat2_t1  
    );
    
    --================================--
    -- Counters registers
    --================================--

    ext_lv1a_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => ext_lv1a_counter_reset, en_i => '0', data_o => ext_lv1a_counter);
    int_lv1a_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => int_lv1a_counter_reset, en_i => req_lv1a, data_o => int_lv1a_counter);
    del_lv1a_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => del_lv1a_counter_reset, en_i => delayed_lv1a, data_o => del_lv1a_counter);
    lv1a_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => lv1a_counter_reset, en_i => t1_lv1a, data_o => lv1a_counter);
    
    int_calpulse_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => int_calpulse_counter_reset, en_i => req_calpulse, data_o => int_calpulse_counter);
    del_calpulse_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => del_calpulse_counter_reset, en_i => delayed_calpulse, data_o => del_calpulse_counter);
    calpulse_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => calpulse_counter_reset, en_i => t1_calpulse, data_o => calpulse_counter);
    
    resync_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => resync_counter_reset, en_i => t1_resync, data_o => resync_counter);
    
    bc0_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => bc0_counter_reset, en_i => t1_bc0, data_o => bc0_counter);
    
    bx_counter_inst : entity work.counter port map(fabric_clk_i => gtx_clk, reset_i => bx_counter_reset, en_i => '1', data_o => bx_x4_counter);
    bx_counter <= "00" & bx_x4_counter(31 downto 2);
        

        
    --================================--
    -- Requests mapping
    --================================--
    
    
    
    -- T1 operations : 3 downto 0
    
    req_lv1a <= request_tri(0); -- write _ send LV1A
    
    req_calpulse <= request_tri(1); -- write _ send Calpulse
    
    req_resync <= request_tri(2); -- write _ send Resync
    
    req_bc0 <= request_tri(3); -- write _ send BC0
    bx_counter_reset <= request_tri(3);  
    
    -- T1 delayed operations : 4 -- write _ Send a delayed LV1A and Calpulse signal
    
    delayed_enable <= request_tri(4);
    delayed_configuration <= request_write(4);
    
    -- Trigger configuration : 5 -- read / write _ Change the trigger source

    trigger_configuration_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => reset, wbus_i => request_write(5), wbus_t => request_tri(5), rbus_o => request_read(5));        
    trigger_configuration <= request_read(5)(1 downto 0);

    -- S Bits configuration : 6 -- read / write _ Controls the Sbits to send to the TDC
    
    sbits_configuration_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => reset, wbus_i => request_write(6), wbus_t => request_tri(6), rbus_o => request_read(6));        
    sbits_configuration <= request_read(6)(2 downto 0); 
   
    -- Reserved : 10 downto 7 
    
    request_read(10 downto 7) <= (others => (others => '0'));
   


    -- VFAT2 clock selection : 12 downto 11
   
    vfat2_clk_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => vfat2_reset_src, wbus_i => request_write(11), wbus_t => request_tri(11), rbus_o => request_read(11));         
    vfat2_src_select <= request_read(11)(0); -- 11 -- read / write _ Select VFAT2 input clock
    
    vfat2_fallback_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => reset, wbus_i => request_write(12), wbus_t => request_tri(12), rbus_o => request_read(12));        
    vfat2_fallback <= request_read(12)(0); -- 12 -- read / write _ Allow automatic fallback of VFAT2         
    
    -- CDCE clock selection : 14 downto 13
    
    cdce_clk_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => cdce_reset_src, wbus_i => request_write(13), wbus_t => request_tri(13), rbus_o => request_read(13));        
    cdce_src_select <= request_read(13)(1 downto 0); -- 13 _ read / write _ Select CDCE input clock

    cdce_fallback_reg : entity work.reg port map(fabric_clk_i => gtx_clk, reset_i => reset, wbus_i => request_write(14), wbus_t => request_tri(14), rbus_o => request_read(14));        
    cdce_fallback <= request_read(14)(0); -- 14 -- read / write _ Allow automatic fallback of CDCE clocks    
    
    -- PLL status : 17 downto 15
    
    request_read(15) <= (0 => pll_locked, others => '0'); -- read _ FPGA PLL locked
   
    request_read(16) <= (0 => cdce_locked_i, others => '0'); -- read _ CDCE Locked
    
    -- Reserved : 20 downto 18 
    
    request_read(20 downto 17) <= (others => (others => '0'));
    
    
    
    -- ADC : 22 downto 21

    request_read(21) <= adc_voltage_value; -- read _ ADC voltage value
    
    request_read(22) <= adc_current_value; -- read _ ADC current value
    
    -- Fixed registers : 23 -- read _ firmware version
    
    request_read(23) <= x"AA150609"; 
    
    -- Reserved : 25 downto 24
    
    request_read(25 downto 24) <= (others => (others => '0'));
    
    
    
    -- Counters : 35 downto 26
    
    request_read(26) <= ext_lv1a_counter;
   
    request_read(27) <= int_lv1a_counter;
    
    request_read(28) <= del_lv1a_counter;
    
    request_read(29) <= lv1a_counter;
    
    request_read(30) <= int_calpulse_counter;
    
    request_read(31) <= del_calpulse_counter;
    
    request_read(32) <= calpulse_counter;
    
    request_read(33) <= resync_counter;
    
    request_read(34) <= bc0_counter;
    
    request_read(35) <= bx_counter;
    
    -- Reserved : 37 downto 36
    
    request_read(37 downto 36) <= (others => (others => '0'));
    
    
    -- T1 counters reset : 46 downto 38
    
    ext_lv1a_counter_reset <= request_tri(38);
    
    int_lv1a_counter_reset <= request_tri(39);
    
    del_lv1a_counter_reset <= request_tri(40);
    
    lv1a_counter_reset <= request_tri(41);
    
    int_calpulse_counter_reset <= request_tri(42);
    
    del_calpulse_counter_reset <= request_tri(43);
    
    calpulse_counter_reset <= request_tri(44);
    
    resync_counter_reset <= request_tri(45);
    
    bc0_counter_reset <= request_tri(46);
    
    -- Reserved : 47
    
    request_read(47) <= (others => '0');
    
    
    
    -- Other registers : 63 downto 48

    --================================--
    -- ChipScope
    --================================--

    chipscope_icon_inst : entity work.chipscope_icon port map (CONTROL0 => cs_icon0, CONTROL1 => cs_icon1);

    chipscope_vio_inst : entity work.chipscope_vio port map (CONTROL => cs_icon0, CLK => gtx_clk, ASYNC_IN => cs_async_in, ASYNC_OUT => cs_async_out, SYNC_IN => cs_sync_in, SYNC_OUT => cs_sync_out);

    gtp_reset <= cs_sync_out(3 downto 0);

    chipscope_ila_inst : entity work.chipscope_ila port map (CONTROL => cs_icon1, CLK => gtx_clk, TRIG0 => cs_ila0, TRIG1 => cs_ila1, TRIG2 => cs_ila2, TRIG3 => cs_ila3);

    cs_ila0 <= tx_data(15 downto 0) & rx_data(15 downto 0);
    cs_ila1 <= tx_data(47 downto 32) & rx_data(47 downto 32);
    
    cs_ila2 <= (0 => vfat2_data_valid(0), 
                1 => vfat2_data_valid(1),
                2 => vfat2_data_valid(2),
                3 => vfat2_data_valid(3),
                4 => vfat2_data_valid(4),
                5 => vfat2_data_valid(5),
                6 => vfat2_data(0).data_out, 
                7 => vfat2_data(1).data_out, 
                8 => vfat2_data(2).data_out,
                9 => vfat2_data(3).data_out,
                10 => vfat2_data(4).data_out,
                11 => vfat2_data(5).data_out,
                12 => vfat2_data(6).data_out,
                13 => vfat2_data(7).data_out,
                14 => vfat2_data(8).data_out,
                15 => vfat2_data(9).data_out,
                16 => vfat2_data(10).data_out,
                17 => vfat2_data(11).data_out,
                18 => vfat2_data(12).data_out,
                19 => vfat2_data(13).data_out,
                20 => vfat2_data(14).data_out,
                21 => vfat2_data(15).data_out,
                22 => vfat2_data(16).data_out,
                23 => vfat2_data(17).data_out,
                24 => vfat2_data(18).data_out,
                25 => vfat2_data(19).data_out,
                26 => vfat2_data(20).data_out,
                27 => vfat2_data(21).data_out,
                28 => vfat2_data(22).data_out,
                29 => vfat2_data(23).data_out,
                others => '0');
                
    cs_ila3 <= (0 => ext_lv1a, 1 => req_lv1a, 2 => t1_lv1a, 3 => '0',
                4 => t1_calpulse, 5 => t1_resync, 6 => t1_bc0, 7 => '0',
                others => '0');

end Behavioral;

