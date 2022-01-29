
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
   .model small
   .data
   .code
   main proc
    mov dl,0
    mov al,0FFh
    add al,0FFh
    adc dl,0
; add your code here

ret




