
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt  
.model small
main proc 
org 100h
          .data
          
          str db 'madam','$'
          strlen dw ($-str) 
          rev db 20 dup(0)
          str_palin db "palin drome $"
          str_notpalin db "not palin drom $"
           
          .code  
          
           lea si,str
           lea di,rev
           add si,strlen
           mov cx,strlen
           add si,-2
           add cx,-2
           
           while:
           mov al,[si]
           mov [di],al
           inc di
           dec si
           
           loop while 
           
           mov al,[si]
           mov [di],al
           inc di
           mov dl,'$'
           mov [di],dl  
           
           mov cx,strlen
           
           plain_check:
           lea si,str
           lea di,rev
           repe cmpsb
           jne not_palin
           
           palin:
           mov ah,09h
           lea dx,str_palin
           int 21h
           
           jmp exit
           
           not_palin:
              mov ah,09h
           lea dx,str_notpalin
           int 21h
            
           jmp exit
           
           exit:
           nop
           ;mov ax,4c00h
           ;int 21h
endp
end main
                      
; add your code here

ret




