
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name OptoHybrid_v1_5 -dir "Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/planAhead_run_1" -part xc6vlx130tff1156-1
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/optohybrid_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj} {ipcore_dir} }
add_files [list {ipcore_dir/chipscope_icon.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_ila.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_vio.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_bx_fifo.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_data_fifo.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/clocking.ucf" [current_fileset -constrset]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/vfat2.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/clocking.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid_v1.5/src/ucf/gtx.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/optohybrid_top.ncd"
if {[catch {read_twx -name results_1 -file "Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/optohybrid_top.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"Z:/Documents/PhD/Code/OptoHybrid_v1.5/prj/optohybrid_top.twx\": $eInfo"
}
