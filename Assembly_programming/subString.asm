
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
.model small
main proc
org 100h
         .data 
         str1 db ' kuerfdahf kuetkuetcsekuet'
         len1 dw ($-str1)
         str2 db 'cse'
         len2 dw ($-str2)
         
         result db "Result : $"
         .code  
         
         lea si,str1,
         mov dx,len1
         mov ax,si
         mov bl,00h
         
         while:
         mov cx,len2
         lea di,str2
         repe cmpsb
         je count
                 
         level:       
         ;don't need for understand  level:    
         ;level same
         
         inc ax
         dec dx
         mov si,ax                  
         cmp dx,00h
         je exit
         jmp while
          
         count:
         inc bl
         inc ax
         dec dx
         mov si,ax                  
         cmp dx,00h
         je exit
         jmp while
         
         
         exit:
         mov ah,09h
         mov dx,offset result
         int 21h
         
         mov ah,2h
         add bl,30h
         mov dl,bl         
         int 21h
; add your code here

ret




