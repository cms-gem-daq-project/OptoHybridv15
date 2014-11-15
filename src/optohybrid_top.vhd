library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

library work;
use work.user_package.all;

entity optohybrid_top is
port(

    -- OptoHybrid signals

    fpga_clk_i          : in std_logic;
    fpga_rx_i           : in std_logic;
    fpga_tx_o           : out std_logic;
    enable_gtp_o        : out std_logic; 
    fpga_test_io        : inout std_logic_vector(5 downto 0);
    leds_o              : out std_logic_vector(3 downto 0);
    
    -- CDCE signals
    
    cdce_le_o           : out std_logic;
    cdce_miso_i         : in std_logic;
    cdce_mosi_o         : out std_logic;
    cdce_sclk_o         : out std_logic;
    
    cdce_auxout_i       : in std_logic;
    cdce_pll_locked_i   : in std_logic;
    cdce_powerdown_o    : out std_logic;
    cdce_ref_o          : out std_logic;
    cdce_sync_o         : out std_logic;
    cdce_pri_p_o        : out std_logic;
    cdce_pri_n_o        : out std_logic;
    
    -- VFAT2 common lines
    
    vfat2_resets_o      : out std_logic_vector(1 downto 0);
    vfat2_mclk_p_o      : out std_logic;
    vfat2_mclk_n_o      : out std_logic;
    vfat2_t1_p_o        : out std_logic;
    vfat2_t1_n_o        : out std_logic;
    vfat2_sda_io        : inout std_logic_vector(5 downto 0);
    vfat2_scl_o         : inout std_logic_vector(5 downto 0);
    vfat2_dvalid_i      : in std_logic_vector(5 downto 0);

    -- VFAT2 signal lines
    
    vfat2_data_0_i      : in std_logic_vector(8 downto 0); -- 7 downto 0 = S bits, 8 = data_out (tracking)
    vfat2_data_1_i      : in std_logic_vector(8 downto 0);
    vfat2_data_2_i      : in std_logic_vector(8 downto 0);
    vfat2_data_3_i      : in std_logic_vector(8 downto 0);
    vfat2_data_4_i      : in std_logic_vector(8 downto 0);
    vfat2_data_5_i      : in std_logic_vector(8 downto 0);
    vfat2_data_6_i      : in std_logic_vector(8 downto 0);
    vfat2_data_7_i      : in std_logic_vector(8 downto 0);
    vfat2_data_8_i      : in std_logic_vector(8 downto 0); 
    vfat2_data_9_i      : in std_logic_vector(8 downto 0);
    vfat2_data_10_i     : in std_logic_vector(8 downto 0);
    vfat2_data_11_i     : in std_logic_vector(8 downto 0);
    vfat2_data_12_i     : in std_logic_vector(8 downto 0);
    vfat2_data_13_i     : in std_logic_vector(8 downto 0);
    vfat2_data_14_i     : in std_logic_vector(8 downto 0);
    vfat2_data_15_i     : in std_logic_vector(8 downto 0);
    vfat2_data_16_i     : in std_logic_vector(8 downto 0);
    vfat2_data_17_i     : in std_logic_vector(8 downto 0);
    vfat2_data_18_i     : in std_logic_vector(8 downto 0);
    vfat2_data_19_i     : in std_logic_vector(8 downto 0);
    vfat2_data_20_i     : in std_logic_vector(8 downto 0);
    vfat2_data_21_i     : in std_logic_vector(8 downto 0);
    vfat2_data_22_i     : in std_logic_vector(8 downto 0);
    vfat2_data_23_i     : in std_logic_vector(8 downto 0);
    
    -- GTP signals
    
    rx_p_i              : in std_logic_vector(3 downto 0);
    rx_n_i              : in std_logic_vector(3 downto 0);
    tx_p_o              : out std_logic_vector(3 downto 0);
    tx_n_o              : out std_logic_vector(3 downto 0);
    
    gtp_refclk_p_i      : in std_logic_vector(3 downto 0);
    gtp_refclk_n_i      : in std_logic_vector(3 downto 0)
    
);
end optohybrid_top;

architecture Behavioral of optohybrid_top is
    
    -- Aliases
    
    signal ext_clk_i                : std_logic := '0';
    signal ext_lv1a_i               : std_logic := '0';
    signal rec_clk_i                : std_logic := '0';
    
    -- Resets
    
    signal reset                    : std_logic := '0';
    
    -- External signals through LEMOs
    
    signal ext_lv1a                 : std_logic := '0';
    signal ext_sbit                 : std_logic := '0';
    
    -- VFAT2
    
    signal vfat2_t1                 : std_logic := '0';
    
    signal vfat2_sda_i              : std_logic_vector(5 downto 0) := (others => '0');
    signal vfat2_sda_o              : std_logic_vector(5 downto 0) := (others => '0');
    signal vfat2_sda_t              : std_logic_vector(5 downto 0) := (others => '0');
    
    -- Clocking
    
    signal fpga_clk                 : std_logic := '0';
    signal vfat2_clk_fpga           : std_logic := '0';
    signal fpga_pll_locked          : std_logic := '0';
    
    signal ext_clk                  : std_logic := '0';
    signal vfat2_clk_ext            : std_logic := '0';
    signal ext_pll_locked           : std_logic := '0';
    
    signal rec_clk                  : std_logic := '0';
    signal cdce_clk_rec             : std_logic := '0';
    signal rec_pll_locked           : std_logic := '0';
    
    signal vfat2_clk_muxed          : std_logic := '0';
    signal cdce_clk_muxed           : std_logic := '0';
    
    signal gtp_clk                  : std_logic := '0';
    signal vfat2_clk                : std_logic := '0';
    
    signal clk_request_write        : array32(3 downto 0) := (others => (others => '0'));
    signal clk_request_tri          : std_logic_vector(3 downto 0) := (others => '0');
    signal clk_request_read         : array32(3 downto 0) := (others => (others => '0'));
    
    -- GTP
    
    signal rx_error                 : std_logic_vector(3 downto 0) := (others => '0');
    signal rx_kchar                 : std_logic_vector(7 downto 0) := (others => '0');
    signal rx_data                  : std_logic_vector(63 downto 0) := (others => '0');
    signal tx_kchar                 : std_logic_vector(7 downto 0) := (others => '0');
    signal tx_data                  : std_logic_vector(63 downto 0) := (others => '0');
    
    -- Registers requests
    
    signal request_write            : array32(63 downto 0) := (others => (others => '0'));
    signal request_tri              : std_logic_vector(63 downto 0);
    signal request_read             : array32(63 downto 0) := (others => (others => '0'));
    
    -- T1 signals
    
    signal delayed_enable           : std_logic := '0';
    signal delayed_configuration    : std_logic_vector(31 downto 0) := (others => '0');
    signal delayed_lv1a             : std_logic := '0';
    signal delayed_calpulse         : std_logic := '0';
    
    signal req_lv1a                 : std_logic := '0';
    signal req_calpulse             : std_logic := '0';
    signal req_resync               : std_logic := '0';
    signal req_bc0                  : std_logic := '0';
    
    signal trigger_configuration    : std_logic_vector(1 downto 0) := (others => '0');
    
    signal t1_lv1a                  : std_logic := '0';
    signal t1_calpulse              : std_logic := '0';
    signal t1_resync                : std_logic := '0';
    signal t1_bc0                   : std_logic := '0';
    
    -- ADC
    
    signal adc_write                : array32(1 downto 0) := (others => (others => '0'));

    -- Registers

    signal registers_write          : array32(7 downto 0) := (others => (others => '0'));
    signal registers_tri            : std_logic_vector(7 downto 0);
    signal registers_read           : array32(7 downto 0) := (others => (others => '0'));

    -- Counters

    signal lv1a_counter             : std_logic_vector(31 downto 0) := (others => '0');
    signal calpulse_counter         : std_logic_vector(31 downto 0) := (others => '0');
    signal resync_counter           : std_logic_vector(31 downto 0) := (others => '0');
    signal bc0_counter              : std_logic_vector(31 downto 0) := (others => '0');
    
    signal lv1a_counter_reset       : std_logic := '0';
    signal calpulse_counter_reset   : std_logic := '0';
    signal resync_counter_reset     : std_logic := '0';
    signal bc0_counter_reset        : std_logic := '0';
    
begin

    --================================--
    -- Global signals
    --================================--

    -- OptoHybrid reset
    reset <= '0';
    
    -- LEDS
    leds_o <= fpga_pll_locked & ext_pll_locked & rec_pll_locked & cdce_pll_locked_i;
    
    --================================--
    -- External signals
    --================================--
   
    -- External clock
    ext_clk_i <= fpga_test_io(1);
    
    -- LV1A
    ext_lv1a_i <= fpga_test_io(3);
    
    ext_lv1a_inst : entity work.monostable port map(fabric_clk_i => gtp_clk, en_i => ext_lv1a_i, en_o => ext_lv1a);
    
    -- S Bit to TDC
    fpga_test_io(4) <= ext_sbit;
    
    --================================--
    -- VFAT2 
    --================================--
    
    -- Resets 
    vfat2_resets_o <= "11";
  
    -- T1
    t1_obufds : obufds port map(i => vfat2_t1, o => vfat2_t1_p_o, ob => vfat2_t1_n_o);
    
    -- I2C
    vfat2_sda_0_iobuf : iobuf port map (o => vfat2_sda_i(0), io => vfat2_sda_io(0), i => vfat2_sda_o(0), t => vfat2_sda_t(0));    
    vfat2_sda_1_iobuf : iobuf port map (o => vfat2_sda_i(1), io => vfat2_sda_io(1), i => vfat2_sda_o(1), t => vfat2_sda_t(1));    
    vfat2_sda_2_iobuf : iobuf port map (o => vfat2_sda_i(2), io => vfat2_sda_io(2), i => vfat2_sda_o(2), t => vfat2_sda_t(2));    
    vfat2_sda_3_iobuf : iobuf port map (o => vfat2_sda_i(3), io => vfat2_sda_io(3), i => vfat2_sda_o(3), t => vfat2_sda_t(3));    
    vfat2_sda_4_iobuf : iobuf port map (o => vfat2_sda_i(4), io => vfat2_sda_io(4), i => vfat2_sda_o(4), t => vfat2_sda_t(4));    
    vfat2_sda_5_iobuf : iobuf port map (o => vfat2_sda_i(5), io => vfat2_sda_io(5), i => vfat2_sda_o(5), t => vfat2_sda_t(5));
    
    --================================--
    -- Clocking
    --================================--
    
    -- FPGA clock
    fpga_clk_pll_inst : entity work.fpga_clk_pll port map(fpga_clk_i => fpga_clk_i, fpga_clk_o => fpga_clk, vfat2_clk_fpga_o => vfat2_clk_fpga, fpga_pll_locked_o => fpga_pll_locked);    
    
    -- External clock
    --ext_clk_pll_inst : entity work.ext_clk_pll port map(ext_clk_i => ext_clk_i, ext_clk_o => ext_clk, vfat2_clk_ext_o => vfat2_clk_ext, ext_pll_locked_o => ext_pll_locked);
    vfat2_clk_ext <= ext_clk_i;
    
    -- VFAT2 clock
    vfat2_buf_clk_inst : bufg port map(i => vfat2_clk_muxed, o => vfat2_clk);
    
    vfat2_clk_obufds : obufds port map(i => vfat2_clk_muxed, o => vfat2_mclk_p_o, ob => vfat2_mclk_n_o);
    
    -- Recovery clock
    rec_clk_pll_inst : entity work.rec_clk_pll port map(rec_clk_i => rec_clk_i, rec_clk_o => rec_clk, cdce_clk_rec_o => cdce_clk_rec, rec_pll_locked_o => rec_pll_locked);
    
    -- CDCE clock
    cdce_primary_clk_obufds : obufds port map(i => cdce_clk_muxed, o => cdce_pri_p_o, ob => cdce_pri_n_o);
    
    cdce_ref_o <= '1';
    cdce_powerdown_o <= fpga_pll_locked;
    cdce_sync_o <= '1';
    cdce_le_o <= '1';     
    
    -- Clock switching
    clock_control_inst : entity work.clock_control
    port map(
        fpga_clk_i          => fpga_clk, 
        vfat2_clk_fpga_i    => vfat2_clk_fpga,
        vfat2_clk_ext_i     => vfat2_clk_ext,
        cdce_clk_rec_i      => cdce_clk_rec,
        fpga_pll_locked_i   => fpga_pll_locked,
        ext_pll_locked_i    => ext_pll_locked,
        rec_pll_locked_i    => rec_pll_locked,
        cdce_pll_locked_i   => cdce_pll_locked_i,
        vfat2_clk_o         => vfat2_clk_muxed,
        cdce_clk_o          => cdce_clk_muxed,
        request_write_o     => clk_request_write,
        request_tri_o       => clk_request_tri,
        request_read_i      => clk_request_read 
    );   
        
    --================================--
    -- GTP
    --================================--

    -- Enable the GTP
    enable_gtp_o <= '1';
    
    -- GTP wrapper instance to ease the use of the optical links
    gtp_wrapper_inst : entity work.gtp_wrapper
    port map(
        gtp_clk_o       => gtp_clk,
        rec_clk_o       => rec_clk_i,
        reset_i         => reset,
        rx_error_o      => rx_error,
        rx_kchar_o      => rx_kchar,
        rx_data_o       => rx_data,
        tx_kchar_i      => tx_kchar,
        tx_data_i       => tx_data,
        rx_n_i          => rx_n_i,
        rx_p_i          => rx_p_i,
        tx_n_o          => tx_n_o,
        tx_p_o          => tx_p_o,
        gtp_refclk_n_i  => gtp_refclk_n_i,
        gtp_refclk_p_i  => gtp_refclk_p_i
    );   
    
    --================================--
    -- Tracking Link
    --================================--
    
    link_tracking_1_inst : entity work.link_tracking
    port map(
        gtp_clk_i       => gtp_clk,
        vfat2_clk_i     => vfat2_clk,
        reset_i         => reset,
        rx_error_i      => rx_error(1),
        rx_kchar_i      => rx_kchar(3 downto 2),
        rx_data_i       => rx_data(31 downto 16),
        tx_kchar_o      => tx_kchar(3 downto 2),
        tx_data_o       => tx_data(31 downto 16),
        request_write_o => request_write,
        request_tri_o   => request_tri,
        request_read_i  => request_read,
        vfat2_sda_i     => vfat2_sda_i(3 downto 2),
        vfat2_sda_o     => vfat2_sda_o(3 downto 2),
        vfat2_sda_t     => vfat2_sda_t(3 downto 2),
        vfat2_scl_o     => vfat2_scl_o(3 downto 2),
        vfat2_dvalid_i  => vfat2_dvalid_i(3 downto 2),
        vfat2_data_0_i  => vfat2_data_8_i(8),
        vfat2_data_1_i  => vfat2_data_9_i(8),
        vfat2_data_2_i  => vfat2_data_10_i(8),
        vfat2_data_3_i  => vfat2_data_11_i(8),
        vfat2_data_4_i  => vfat2_data_12_i(8),
        vfat2_data_5_i  => vfat2_data_13_i(8),
        vfat2_data_6_i  => vfat2_data_14_i(8),
        vfat2_data_7_i  => vfat2_data_15_i(8)
    );
    
    --================================--
    -- T1 handling
    --================================--
    
    t1_delayed_inst : entity work.t1_delayed
    port map(
        gtp_clk_i   => gtp_clk,
        reset_i     => reset,
        en_i        => delayed_enable,
        delay_i     => delayed_configuration, 
        lv1a_o      => delayed_lv1a,
        calpulse_o  => delayed_calpulse
    );
        
    trigger_handler_inst : entity work.trigger_handler
    port map(
        gtp_clk_i           => gtp_clk,
        reset_i             => reset,
        req_trigger_i       => req_lv1a,
        delayed_trigger_i   => delayed_lv1a,
        ext_trigger_i       => ext_lv1a,
        trigger_config_i    => trigger_configuration,
        lv1a_o              => t1_lv1a
    );
    
    t1_calpulse <= req_calpulse or delayed_calpulse;
    
    t1_resync <= req_resync;
    
    t1_bc0 <= req_bc0;

    t1_handler_inst : entity work.t1_handler 
    port map(
        gtp_clk_i   => gtp_clk,
        vfat2_clk_i => vfat2_clk,
        reset_i     => reset,
        lv1a_i      => t1_lv1a,
        calpulse_i  => t1_calpulse,
        resync_i    => t1_resync,
        bc0_i       => t1_bc0,
        t1_o        => vfat2_t1  
    );
  
    --================================--
    -- ADC
    --================================--
    
    adc_handler_inst : entity work.adc_handler
    port map(
        fabric_clk_i    => gtp_clk,
        reset_i         => reset,
        uart_rx_i       => fpga_rx_i,
        wbus_o          => adc_write
    );
    
    --================================--
    -- Registers
    --================================--

    global_registers_inst : entity work.registers
    generic map(SIZE => 8)
    port map(
        fabric_clk_i    => gtp_clk,
        reset_i         => reset,
        wbus_i          => registers_write,
        wbus_t          => registers_tri,
        rbus_o          => registers_read
    );
        
    --================================--
    -- Counters registers
    --================================--

    lv1a_counter_inst : entity work.counter port map(fabric_clk_i => gtp_clk, reset_i => lv1a_counter_reset, en_i => t1_lv1a, data_o => lv1a_counter);
    calpulse_counter_inst : entity work.counter port map(fabric_clk_i => gtp_clk, reset_i => calpulse_counter_reset, en_i => t1_calpulse, data_o => calpulse_counter);
    resync_counter_inst : entity work.counter port map(fabric_clk_i => gtp_clk, reset_i => resync_counter_reset, en_i => t1_resync, data_o => resync_counter);
    bc0_counter_inst : entity work.counter port map(fabric_clk_i => gtp_clk, reset_i => bc0_counter_reset, en_i => t1_bc0, data_o => bc0_counter);
    
    --================================--
    -- Request & register mapping
    --================================--
    
    -- T1 operations 3 downto 0
    
    req_lv1a <= request_tri(0); -- 0 _ write _ send LV1A
    
    req_calpulse <= request_tri(1); -- 1 _ write _ send Calpulse
    
    req_resync <= request_tri(2); -- 2 _ write _ send Resync
    
    req_bc0 <= request_tri(3); -- 3 _ write _ send BC0
    
    -- T1 counters : 7 downto 3
    
    request_read(4) <= lv1a_counter; -- 4 _ read _ # of LV1As
    
    request_read(5) <= calpulse_counter; -- 5 _ read _ # of Calpulses
    
    request_read(6) <= resync_counter; -- 6 _ read _ # of Resyncs
    
    request_read(7) <= bc0_counter; -- 7 _ read _ # of BC0s 
    
    -- T1 counters reset : 11 downto 8
    
    lv1a_counter_reset <= request_tri(8); -- 8 _ write _ reset LV1A counter
    
    calpulse_counter_reset <= request_tri(9); -- 9 _ write _ reset Calpulse counter
    
    resync_counter_reset <= request_tri(10); -- 10 _ write _ reset Resync counter
    
    bc0_counter_reset <= request_tri(11); -- 11 _ write _ reset BC0 counter
    
    -- ADC : 13 downto 12

    request_read(13 downto 12) <= adc_write(1 downto 0); -- 12 & 13 _ read _ ADC values

    -- Fixed registers : 17 downto 14
    
    request_read(14) <= x"20141210"; -- 14 _ read _ firmware version
    
    request_read(15) <= (0 => fpga_pll_locked, others => '0'); -- 15 _ read _ FPGA PLL locked
    
    request_read(16) <= (0 => cdce_pll_locked_i, others => '0'); -- 16 _ read _ CDCE Locked
    
    request_read(17) <= (0 => rec_pll_locked, others => '0'); -- 17 _ read _ GTP recovered clock PLL locked

    -- VFAT2 clock selection : 18
    
    registers_tri(0) <= request_tri(18) or clk_request_tri(0); -- 18 _ read / write _ Select VFAT2 input clock
    registers_write(0) <= clk_request_write(0) when clk_request_tri(0) = '1' else request_write(18);
    request_read(18) <= registers_read(0);
    
    clk_request_read(0) <= registers_read(0);
    
    -- CDCE clock selection : 19
    
    registers_tri(1) <= request_tri(19) or clk_request_tri(1); -- 19 _ read / write _ Select CDCE input clock
    registers_write(1) <= clk_request_write(1) when clk_request_tri(1) = '1' else request_write(19);
    request_read(19) <= registers_read(1);
    
    clk_request_read(1) <= registers_read(1);
    
    -- VFAT2 & CDCE clock fallback : 21 downto 20
    
    registers_tri(3 downto 2) <= request_tri(21 downto 20); -- 21 & 20 -- read / write _ Allow automatic fallback of VFAT2 and CDCE clocks
    registers_write(3 downto 2) <= request_write(21 downto 20);
    request_read(21 downto 20) <= registers_read(3 downto 2);
    
    -- Trigger configuration : 22
    
    registers_tri(4) <= request_tri(22); -- 22 -- read / write _ Change the trigger source
    registers_write(4) <= request_write(22);
    request_read(22) <= registers_read(4);    
    
    trigger_configuration <= registers_read(4)(1 downto 0);
    
    -- Writable registers : 25 downto 23
    
    registers_tri(7 downto 5) <= request_tri(25 downto 23);
    registers_write(7 downto 5) <= request_write(25 downto 23);
    request_read(25 downto 23) <= registers_read(7 downto 5);
    
    -- Other registers : 63 downto 26
    
end Behavioral;