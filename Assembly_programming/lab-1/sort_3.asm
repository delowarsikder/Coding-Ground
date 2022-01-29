
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
    
     mov al,04h
     mov bl,05h    
     mov cl,08h
     
     cmp al,bl
     jae m1
     
     
     
     m1:
     cmp al,cl
     jae m2
     
     m2:
     


ret




