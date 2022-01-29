
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
    .model small
     
org 100h 

    .data      ;db means data byte
    message1 db "Enter a number: $"
    message2 db " Enter another number: $"
    
    message3 db " + $"
    message4 db " = $"
    
    
    .code
    
    main proc
            mov ax,seg message1
            mov ds,ax
            mov dx,offset message1
            mov ah,9h   ;9h print to string
            int 21h
                   
           mov ah,1h ;1h for read the chareter
           ;intput stored in al 
           int 21h
           
           mov bl,al  
           
            mov ax,seg message2
            mov ds,ax
            mov dx,offset message2
            mov ah,9h
            int 21h
             mov ah,1h ;1h for read the chareter
           ;intput stored in al 
           int 21h
                     
             mov cl,al 
             
             mov dl,bl
             mov ah,2h ;print charecter 
             int 21h
             
             
            mov ax,seg message3
            mov ds,ax
            mov dx,offset message3
            mov ah,9h
            int 21h 
              
            mov dl,cl
            mov ah,2h ;2h for write the chareter
           ;intput stored in al 
           int 21h
           
           
            mov ax,seg message4
            mov ds,ax
            mov dx,offset message4
            mov ah,9h   ;9h print to string
            int 21h                
            
            sub bl,30h ;convert charecter to decimal
            sub cl,30h
             ;add bl,48h
             ;add cl,48h
             
            add bl,cl
            
            add bl,30h  
            ;add bl,48
            
            
             mov dl,bl
             mov ah,2h ;2h for print the chareter
           ;intput stored in al 
           int 21h
                
    endp
    end main 
; add your code here

ret
