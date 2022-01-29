  .model small
  .code
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
     
  main proc
    
org 100h
       mov cx,5
       ;inc cx 
    top:
       ;inc cx
       mov dl,5
       add dl,48
    
       mov ah,2h
     
       int 21h
    
    
    loop top
; add your code here
  endp
  end main
ret




