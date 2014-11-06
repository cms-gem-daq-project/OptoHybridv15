
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name OH -dir "Z:/Documents/PhD/Code/OH/planAhead_run_1" -part xc6slx150tfgg676-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/Documents/PhD/Code/OH/optohybrid_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/Documents/PhD/Code/OH} {ipcore_dir} }
set_property target_constrs_file "Z:/Documents/PhD/Code/OH/src/floorplaning.ucf" [current_fileset -constrset]
add_files [list {Z:/Documents/PhD/Code/OH/src/pinout.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OH/src/timing.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OH/src/gtp.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OH/src/floorplaning.ucf}] -fileset [get_property constrset [current_run]]
link_design
