
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
  .model small
  main proc
org 100h
     .data
     
     str1 db 'ad'
     len1 dw ($-str1)
     str2 db 'ad' 
    s db "same $"
     ns db "not same $"
     .code
     
     mov cx,len1
     lea si,str1
     lea di,str2
     repe cmpsb
     jz same
      
      jmp notsame
     
     same:
      mov ah,09h
    ;mov dx,offset s 
    lea dx,s
      int 21h
     jmp exit
     
     notsame:
      mov ah,09h
    ;mov dx,offset ns
    lea dx,ns
      int 21h
     jmp exit
     exit:
; add your code here

ret




