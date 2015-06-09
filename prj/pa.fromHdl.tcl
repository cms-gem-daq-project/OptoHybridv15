
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name OptoHybrid_v1_5 -dir "Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/planAhead_run_5" -part xc6vlx130tff1156-1
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/vfat2.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/tracking_bx_fifo.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/tracking_data_fifo.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/chipscope_icon.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/chipscope_ila.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/chipscope_vio.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/ext_pll.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/i2c_data.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/i2c_ctrl.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/user_package.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/i2c_master.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/vi2c_wrapper.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/tracking_readout.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/tracking_decoder.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/tracking_concentrator.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/packages/vfat2_pkg.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/vi2c_core.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/tracking_core.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/t1_encoder.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/registers_core.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/gtp_tx_mux.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/gtp_rx_mux.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/counter.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/clock_bridge_strobes.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/gtx_gtx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/system/vfat2_buffers.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/system/gtx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/trigger_handler.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/t1_handler.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/t1_delayed.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/registers.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/old/link_tracking.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../src/optohybrid_top.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top optohybrid_top $srcset
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/vfat2.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/clocking.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/gtx.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_icon.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_ila.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_vio.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/icon_system.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ila_vfat.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_bx_fifo.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_data_fifo.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/vio_system.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6vlx130tff1156-1
