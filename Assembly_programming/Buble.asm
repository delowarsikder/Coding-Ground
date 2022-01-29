; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
.data 
ar db 05h,03h,01h,02h,04h

len equ ($-ar)
.code

mov cx,len-1                                
while:
mov dx,cx
lea si,ar 
inner:
 
mov al,[si]
mov bl,[si+1]
cmp al,bl
jc noswap
  
swap: 

mov [si+1],al
mov [si],bl
  
noswap:

inc si
dec dx 
cmp dx,00h
jnz inner

loop while

; add your code here

ret




