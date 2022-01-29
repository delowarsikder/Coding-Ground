.model small 

;saveflags dw ?  ;variable
.code
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
    main proc
org 100h    
  
  ;   pushf
  ;   pop saveflags
  ;   push saveflags 
  ;   popf     

mov eax,1
mov ebx,1
mov ecx,1

pusha

mov eax,5
mov ebx,5
mov ecx,5

popa
; add your code here
   endp
   
   end main
ret




