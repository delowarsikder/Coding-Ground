
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
 .model small
 main proc 
    
org 100h
    .data 
    str1 db ' madam '
    len equ ($-str1)
    len1 equ (len/2)
    strPalin db "string is palindrom $"
    strNotPalin db "string is not palindrom $"  
    
    .code  
    
     lea si,str1
     mov di,si
     add di,len-1
     mov cx,len1 
  
     while:
     mov al,[si]
     mov bl,[di]
     cmp al,bl   
     jne not_palin
     inc si
     dec di
    
     ;jmp palin
     loop while
     
     
     palin:
      mov ah,09h
    mov dx,offset strPalin
      int 21h
     ; nop
     jmp exit
     
     not_palin:
     mov ah,9
     lea dx,strNotPalin
     int 21h 
     jmp exit
     exit:  
; add your code here

ret




