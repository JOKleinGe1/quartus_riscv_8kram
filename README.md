# min_sys_riscv
Minimal system with RISC-V picorv32 : asm startup + c example + verilog system + testbench + Makefile

Includes intel-FPGA (quartus17) project and files for synthesis on DE10lite FPGA Board.

Status : 

simulation : ok 

synthesis : ok

Design for education purpose. 
From JOKlein, Dept GEii-1,IUT Cachan, Univ Paris-Saclay. 

# INSTALL INSTRUCTIONS:
1. Install RISCV dev tools
   
   from  https://github.com/YosysHQ/picorv32
   
2. Install intel fpga quartus LITE edition
   
   from https://www.intel.com/content/www/us/en/software-kit/825278/intel-quartus-prime-lite-edition-design-software-version-23-1-1-for-windows.html
   
3. Check tools path in the makefile
   
   e.g. CC := /opt/riscv32i/bin/riscv32-unknown-elf-gcc
# GCC + VERILOG COMPILATION AND SIMULATION 
   
4. Compile the project
 
   > make clean
   
   > make
   
5. run intel-fpga quartus
    
   > ~/intelFPGA_lite/23.1std/quartus/bin/quartus &
   
  with quartus:
  
     File > open_project "quartus_mini_sys_riscv.qpf"
     
     Processing > Start_Compilation
   
   Connect the DE10Lite board to PC USB  
    
   launch Programmer and Start programming the device

   Reset the RISCV CPU (KEY0)
   
   Well done !
