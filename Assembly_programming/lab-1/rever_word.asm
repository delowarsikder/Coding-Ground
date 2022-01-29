
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
.model small
main proc
org 100h
  .data
  
  str db 'hello world '
  len dw ($-str) 
  st db len dup(0)
  temp db ?
  count db ?
  c db 00h
  
  s db ' ' 
  
  .code  
  
  lea si,str
  lea di,str
  mov cx,si
  add cx,len+1
  mov count,00h
  
  while: 
  mov al,[si]
  cmp al,s
  
  je rev
  inc si
  
  cmp si,cx
  
  jae exit
  jmp while
  
  
  rev:
  mov dx,si
  dec si
  mov count,al
  
  copy:
  mov al,[di]
  mov bl,[si]
  mov [di],bl
  mov [si],al
  inc di
  dec si
  cmp di,si
  jae again
  jmp copy
  
  again:
  mov si,dx
  inc si
  mov di,si
  cmp si,cx
  jae exit
  jmp while
  
  exit:
;  mov ah,09h
;  lea dx,str
;  int 21h
  nop
; add your code here

ret




