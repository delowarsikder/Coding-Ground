   .model small
   
   ;.data
   .code
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
    main proc
org 100h
       mov dl, 3
      ; inc dl
       ;inc dl
       dec dl
       add dl, 48
       mov ah, 2h;code for print a char
       int 21h
    endp
    end main
; add your code here

ret




