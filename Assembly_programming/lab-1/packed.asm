
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
     mov al,a
     mov bl,b
     and al,0Fh
     and bl,0Fh
     rol al,4 
     or al,bl
     ;mov c,al
; add your code here

ret

a db '9'
b db '5' 
c db 0


