foo(char*, char*):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        mov     QWORD PTR [rbp-16], rsi
        mov     rax, QWORD PTR [rbp-8]
        movzx   edx, BYTE PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        movzx   eax, BYTE PTR [rax]
        xor     edx, eax
        mov     rax, QWORD PTR [rbp-8]
        mov     BYTE PTR [rax], dl
        mov     rax, QWORD PTR [rbp-8]
        movzx   edx, BYTE PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        movzx   eax, BYTE PTR [rax]
        xor     edx, eax
        mov     rax, QWORD PTR [rbp-16]
        mov     BYTE PTR [rax], dl
        mov     rax, QWORD PTR [rbp-8]
        movzx   edx, BYTE PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        movzx   eax, BYTE PTR [rax]
        xor     edx, eax
        mov     rax, QWORD PTR [rbp-8]
        mov     BYTE PTR [rax], dl
        nop
        pop     rbp
        ret