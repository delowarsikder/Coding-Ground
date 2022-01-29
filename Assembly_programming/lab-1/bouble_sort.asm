
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
    mov cx,len-1
    outer:
    lea si,ar
    mov dx,cx
    inner:
    mov al,[si]
    mov bl,[si+1]
    cmp al,bl
    jc noswap
    mov [si],bl
    mov [si+1],al
 
    noswap:
    inc si
    dec dx
    cmp dx,00h
    jnz inner
    
    loop outer
; add your code here

ret

ar db 05h,03h,01h,04h,02h
len equ ($-ar)

      ;printn 'hello world'

