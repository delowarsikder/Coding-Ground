
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 
lea si,ar
lea di,ar1

   mov cx,len
level:
mov al,[si]
mov [di],al
inc si
inc di 
loop level  
; add your code here

ret

  ar db 05h,03h,02h,01h,04h
  len equ ($-ar)
  ar1 db 5 dup(0)

