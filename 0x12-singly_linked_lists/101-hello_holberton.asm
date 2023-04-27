section .data
    hello db 'Hello, Holberton', 10, 0 ; 10 is ASCII value for newline
    format db '%s', 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Pass the address of hello and format to printf as arguments
    mov rdi, format
    mov rsi, hello
    
    ; Call printf function to print the string
    xor eax, eax
    call printf
    
    ; Clean up the stack and exit program
    mov rsp, rbp
    pop rbp
    
    xor eax, eax
    ret
