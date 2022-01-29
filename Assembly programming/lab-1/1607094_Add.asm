; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt 

.model small
main proc
org 100h
   .data 
   a dw 0FFFEh
   b dw 0D065h 
  ; show db "Sum : $"
   sum dd ?
   
   .code
   mov ax,a
   mov cx,b
   
   call sumfunc
   
   jmp exit
   
   proc sumfunc near
    pushf
    push ax
    push bx
    push cx
    push dx
    
    add ax,cx
    adc bx,00h
    jc next
    next:
    lea di,sum
    add [di+2],bx
    mov [di],ax
    
    pop dx
    pop cx
    pop bx
    pop ax
    popf
     
     ret
    sumfunc endp
    
   exit: 
   nop     
   
ret
endp


