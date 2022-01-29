
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
   .model small
   .data
   .code
   main proc
    
    mov ax,5000h
    mov bx,2000h
    mul bx 
   
   endp
   end main
   
; add your code here

ret




