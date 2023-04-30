
section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    xor esi, esi
    call printf

    mov rsp, rbp
    pop rbp
    ret
format db 'Hello, Holberton', 10, 0
