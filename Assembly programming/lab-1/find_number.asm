
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 

   mov cl,01011100b
   mov al,08h
   mov bl,00h 
   
   l1:   
   dec al 
   rol cl,1
    
   jc l2 
   
   cmp al,00h 
   je l3    ;je jump if al==00h else jump
   
   jmp l1      ;je conditional jump /jmp   unconditional jump
   
   l2:
   inc bl
   
   cmp al,00h       
   je l3 
   
   jmp l1
   
   l3:
   nop  ;like as return 0
   
; add your code here

ret

