; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt 

;find max value from three number
 .model small
 
org 100h
  .data
  
a dw "Enter a : $"
b dw " Enter b : $"
c dw " Enter c : $"
m dw " max value : $"  

.code
;for get input form console
;input x;
mov ax,seg a
mov ds,ax
mov dx,offset a
mov ah,9h
int 21h
mov ah,1h
int 21h  
mov bl,al

; input y
mov ax,seg b
mov ds,ax
mov dx,offset b
mov ah,9h
int 21h
mov ah,1h
int 21h  
mov cl,al


;input z 

mov ax,seg c
mov ds,ax
mov dx,offset c
mov ah,9h
int 21h
mov ah,1h
int 21h  
mov al,al


;for print max value 
mov ax,seg m
mov ds,ax
mov dx,offset m
mov ah,9h
int 21h


; mov al,08h
; mov bl,05h
; mov cl,06h
       
     cmp al,bl
     
     jae l1
     
     cmp bl,cl
     jae l3
     jmp l4 
     
     l1:
     cmp al,cl
     jge l2
     jmp l4
     
     l2:
     mov dl,al
     ;add dl,48
     mov ah,2h
     int 21h
     jmp l
     l3:
     mov dl,bl
     ;add dl,48
     mov ah,2h
     int 21h
     jmp l
     l4:
       mov dl,cl
       ;add dl,48
     mov ah,2h
     int 21h
     jmp l 
     l:
     nop  
; add your code here

ret


