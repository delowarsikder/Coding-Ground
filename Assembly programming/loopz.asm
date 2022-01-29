
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
 .model small
 .code
 main proc
org 100h
mov cx,4
mov bx,5
    top:
    
       mov dl,5
       add dl,48
       mov ah,2h
       int 21h
    
    
      cmp bx,5
    loopz top
; add your code here
 endp
 end main
ret




                     