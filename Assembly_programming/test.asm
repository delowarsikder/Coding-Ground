
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
 main proc
org 100h
   .data 
   str db "hello world! $"
       .code
       mov ah, 09h
       lea dx, str
       int 21h
       ;end
; add your code here

ret




