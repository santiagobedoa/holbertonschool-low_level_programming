.model small
 
 .stack 100h
 
 .data
    mensaje  db  "Hello, world!$"
 
 .code
    main  proc
        mov  AX,@data
        mov  DS, AX
        mov  DX, offset mensaje
        mov  AH,09h
        int  21h
        mov  AX,4C00h
        int  21h
    main endp
 end main
