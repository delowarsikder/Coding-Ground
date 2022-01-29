
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
  .model small
  .code
  main proc
    
org 100h
    
    mov ax,100 
    mov bx,200
    cmp ax,bx
      je l2   ;if (true)   check equal
      ;jne if (!true)  
      ;jncx if (cx==0)
      mov dx,2
    ;jnc l2  ;it like if(!x).x=0 ture else false...
    ;jn like if (x) .x=1 true else false 
       ;mov bx,6
    
    l2:
    ;mov bx,3
    mov dx,6 
  endp
  end main
; add your code here

ret




