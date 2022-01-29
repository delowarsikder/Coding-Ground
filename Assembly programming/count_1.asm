
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h   
      mov al,08h
      mov cl,01010011b
      mov bl,00h
      l1:
      dec al
      rol cl,1
      jc l2
      cmp al,0h
      je l3
      jmp l1
      l2:
      inc bl
      cmp al,00h
      je l3 
      jmp l1
      
      l3:
      nop
      
; add your code here

ret




