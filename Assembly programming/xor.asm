
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
mov dx,2h
mov cx,1h
xor dx,cx
mov ah,2h   
add dx,48
int 21h
; add your code here

ret




