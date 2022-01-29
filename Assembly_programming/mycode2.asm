 .model small
 
 ;.data  ;don't work my emulator
 
 .code
 
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
 
org 100h
 
 mov ah,1h     ;code for read charecter (charecter save in al register)
  
 int 21h       ;Dos interrupt "do it"
 
 mov dl,al    ;copy charecter to dl
 
 mov ah,2h    ; code for write charecter
 
 int 21h       ;display charecter  
 
 end
 
; add your code here

ret




