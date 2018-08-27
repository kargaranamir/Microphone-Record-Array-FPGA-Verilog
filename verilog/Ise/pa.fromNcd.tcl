
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name ft_afifo_hls_loopback -dir "D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/planAhead_run_2" -part xc6slx9tqg144-2
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/afifo_loopback.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise} {ipcore_dir} }
add_files [list {ipcore_dir/data_fifo.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/fifo.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "afifo.ucf" [current_fileset -constrset]
add_files [list {afifo.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/afifo_loopback.ncd"
if {[catch {read_twx -name results_1 -file "D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/afifo_loopback.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/afifo_loopback.twx\": $eInfo"
}
