section .data
    hello db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Pass the address of hello and format to printf as arguments
    mov rdi, format
    mov rsi, hello
    xor eax, eax
    
    ; Call printf function to print the string
    call printf
    
    ; Clean up the stack and exit program
    mov rsp, rbp
    pop rbp
    
    xor eax, eax
    ret
