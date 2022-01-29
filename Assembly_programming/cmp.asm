
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
   .model small
   .code
   main proc
    
org 100h
    mov ax,2
    mov bx,2
    ;test ah,0000000b
    cmp ax,bx
; add your code here
   endp
   end main
ret




