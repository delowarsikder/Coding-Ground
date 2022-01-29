     .model small
     ;.data not necessary 
     count1 db 2
     .code
     
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

main proc
org 100h
               
       mov dl,count1
        
        ;sub dl,2 
         
       add dl,48
       
       mov ah,2h ;code for print char 
                                                
       int 21h   ;prints value of "dl"

; add your code here
endp 

end main

ret

 


