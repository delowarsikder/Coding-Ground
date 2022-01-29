
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
  .model small
  .code
  main proc
org 100h
  
  mov ax,1
  call blue 
  mov ax,3
  
; add your code here
  endp
  
  blue proc
  mov ax,4
  mov bx,4
  ;         jmp green
    ret   
  blue endp
  
  end main
  
;ret




