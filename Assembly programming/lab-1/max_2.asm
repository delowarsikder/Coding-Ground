;complate 
;work successfully for every input

org 100h
mov al,x
mov bl,y
mov cl,z

cmp al,bl ;first if
jae cac
jmp cbc ;last else 


cac:
cmp al,cl
jae pa1
jmp pca ;c max -1  a max-2

pa1:
;print a as max-1
    mov dl,al 
    add dl,48
    mov ah,2h
    int 21h
    
cmp bl,cl
jae pb1
jmp pc1
pb1:

;print b as max -2
 mov dl,bl
 add dl,48
    mov ah,2h
    int 21h  
    jmp last
pc1:
;print c as a max -2
   mov dl,cl
   add dl,48
    mov ah,2h
    int 21h 
    jmp last
pca:
;print c as max-1
       mov dl,cl
       add dl,48
    mov ah,2h
    int 21h
    ;int 0dh
    mov al,x
;print a as max-2
 mov dl,al
 add dl,48
    mov ah,2h
    int 21h
      jmp last
 
 ;else //end
 
    cbc:
    cmp bl,cl
    jae pb2   
    jmp pcb
    
    pb2:
    ;print b as max-1
     mov dl,bl
     add dl,48
    mov ah,2h
    int 21h
    mov al,x ; to recovber al data change ah 
    ;compare a & c
    cmp al,cl
    jae pa2
    jmp pc2
    
    pa2:  
    ;print a as max-2
    mov dl,al
    add dl,48
    mov ah,2h
    int 21h 
    jmp last
    pc2:     
    ;print c as max -2 
     mov dl,cl
     add dl,48
    mov ah,2h
    int 21h 
    jmp last
      
    pcb:
    ;print c as max-1
    mov dl,cl
    add dl,48
    mov ah,2h
    int 21h  
    
    ;print b max -2
    mov dl,bl
 add dl,48
    mov ah,2h
    int 21h 
     jmp last  
    last:
    nop    

ret

;variable 
x db 02h
y db 06h
z db 04h    