.model small 
; .data
.code
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
   main proc
org 100h
           
      mov cx,-32768
      add cx,-2
; add your code here  

   endp
   end main

ret




