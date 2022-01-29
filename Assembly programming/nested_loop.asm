 
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
   .model small
   .code
   main proc
    
org 100h   

       mov cx,5 
       mov bx,5
    l1:    
      dec bx
      mov dl,1
      add dl,48
      mov ah,2h
      int 21h  
      

    l2:      
    
      mov dl,5
      add dl,48
      mov ah,2h
      int 21h
    
    
    loop l2
    
      mov cx,5 
      mov cx,bx
    loop l1 
    
   endp
   end main
; add your code here

ret




