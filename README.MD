# Written  by MD Harrington London Kent DA6 8NP



## Goal  : The  program solves the issues of selecting a correct driver for a box  with known  volume VB and compiles this both  for linuix and windows boxes 

I wrote this explicitly for FaceBook Users Group DIY Loudpseakers to help them with learning how to  select drivers for any reasonable simple box design 

![DIY Loudspeakers ](https://scontent.flhr3-3.fna.fbcdn.net/v/t39.30808-6/414725097_981066736738966_2685870536076874731_n.jpg?stp=dst-jpg_s960x960&_nc_cat=1&ccb=1-7&_nc_sid=2285d6&_nc_ohc=v_KIGNWEDA0Q7kNvgGoLrF0&_nc_zt=23&_nc_ht=scontent.flhr3-3.fna&_nc_gid=AvKN3ZrPnZhshatjPFGTd8Y&oh=00_AYBCnrho1Y-2KsJb1K5AK-GeTDSunCUCEIMWUUodw8Ye_g&oe=6752A443)

## Definition of terms used ::
### 1: f3   
The minus 3 decibel half power frequency (Designates low end of roll-off)  

### 2: f2   
The resonant frequency of The driver    

### 3: fc 
 The resonant frequency of The closed box system    

### 4: Q  
 The ratio of reactance to resistance (series circuit) or parallel circuit    

### 5: Qts 
The total Q of The driver (woofer) at fs considering all driver resistances    

### 6: Qtc 
The total Q of The system at fc, including all system resistances   

### 7: Vas 
The volume of air having The same acoustic compliance as The driver suspension    

### 8: Vab 
The volume of air having The same acoustic compliance as The enclosure    

### 9: Xmax  
The peak linear displacement of driver cone    

### 10: Sd  
The effective surface area of driver cone    

### 11: Vd   
The peak displacement volume of driver cone    

### 12: Vb  
The net internal volume of The enclosure    

### 13: Alpha  
The compliance ratio    

### 14:  Eta or No or oTherwise  shown as  $\alpha$ 
The reference efficiency 

## Pre Requisites ::  

# Warning NB Please note !! 

## You must follow the next steps on linux systems  This  cross compiles  for both linux os and windows os 

### If installing on Debian linux  follow these steps 

- sudo apt update  && sudo apt upgrade   

- sudo apt install mingw-w64  

- Verify installation  
x86_64-w64-mingw32-gcc --version  

- Install gdb for debugging Windows executables:  
sudo apt install gdb-mingw-w64

- Ensure Math Library Installation  
sudo apt install libm-dev

- Install wine to check windows cross compiled executables  
 sudo apt install wine


## How to compile after downloading 

### To make linux executable  
Issue the command   make linux 

#### To compile the exe for windows 64 bit  

Issue the command   make windows 

## TO RUN THE PROGRAM  ON LINUX " Do the following" 
## Issue the command from terminal as follows ./calcdriver_linux

## TO TEST WINDOWS EXE SIMPLY RUN THE FOLLOWING COMMAND 
## wine calcdriver.exe

### All should work for you without issues 

# Enjoy and have fun all

## This should be of great benefit to The Face book group  known as DIY LOUDSPEAKERS  https://www.facebook.com/groups/127554171198551/

## Notes  **** Im  working on other projects for you  **** 

### Be patiant its comming to you and I have lots to show you which will open many doors  for you , of all types  Im not a perfectionist and I dont expect anyone in this group to be anywhere near this or like  some whom have done  nothing but use totally negative  attitudes  

### Ignore them and you go and have fun.  Take care all !! Best of luck with this and much more  , Mark  Kent London UK time now 00:17hrs Monday 2-12-2024 









