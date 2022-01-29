  
org 100h 
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

    .model small
    .data
    .code
    main proc
        

        mov ax,2
        shl ax,3
        mov bx,2
        shr bx,2
        
        
    endp
    end main
; add your code here

ret




