   .model small
    .data
    var1 dw 1
   .code
   
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
    
    main proc
        
org 100h
        
       mov eax,0
       mov ax,val1
       
; add your code here
    endp
    end main
    
ret




