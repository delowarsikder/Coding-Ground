
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
     mov al,'5'
     mov bl,'3'
     and bl,0Fh
     and al,0Fh
     rol al,4
     or al,bl
     
; add your code here

ret




