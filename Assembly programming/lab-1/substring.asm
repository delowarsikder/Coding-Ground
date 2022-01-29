
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
.model small
main proc
org 100h
    .data

    str db 'kuet ku hello kuetcse '
    len1 dw ($-str)
    subStr db 'ku'
    len2 dw ($-subStr)
    
    .code
    lea si,str
    mov bx,00h  
    mov dx,len1
    mov ax,si
    
     while:
     lea di,subStr
     
     mov cx,len2    
     Sub_str:
     lea di,subStr
     cld
     repe cmpsb 
    
    je find  
     dec dx
    inc ax
    mov si,ax
    cmp dx,00h
    je exit                 
    jmp while
    
    find:
    inc bx
    dec dx
    inc ax
    mov si,ax
    
    cmp dx,00h
    je exit
    
    jmp while
    exit:
    nop
    
; add your code here

ret





