
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
     .model small
     .code
     main proc
org 100h      

mov dx,00000001b
mov cx,00000101b
and dx,cx
mov ah,2h
add dx,48
int 21h 
or dx,cx
int 21h
; add your code here

ret




