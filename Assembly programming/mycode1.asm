.model tiny       ;com program, code data & Stack in one 64k segment
.code               ;code segement

; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h            ;code start at offset 100h

main proc near 
    
   mov ah,09h               ;function tyo display a string
   mov dx,offset message    ;offset of message string terminating with $
   int 21h                  ;dos interrupt
   
   mov ah,4ch               ;function to teminate
   mov al,00
   int 21h                  ;dos interrupt 
    
endp
message db "Hello world $"   ;meassage to bo displayed teminate with a $
end main

; add your code here

ret




