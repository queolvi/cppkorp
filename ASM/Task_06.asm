foo(unsigned int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-36], edi
        mov     QWORD PTR [rbp-8], 0
        mov     QWORD PTR [rbp-16], 1
        cmp     DWORD PTR [rbp-36], 0
        jne     .L2
        mov     eax, 0
        jmp     .L3
.L2:
        mov     DWORD PTR [rbp-20], 2
        jmp     .L4
.L5:
        mov     rax, QWORD PTR [rbp-16]
        mov     QWORD PTR [rbp-32], rax
        mov     rax, QWORD PTR [rbp-8]
        add     QWORD PTR [rbp-16], rax
        mov     rax, QWORD PTR [rbp-32]
        mov     QWORD PTR [rbp-8], rax
        add     DWORD PTR [rbp-20], 1
.L4:
        mov     eax, DWORD PTR [rbp-20]
        cmp     DWORD PTR [rbp-36], eax
        jnb     .L5
        mov     rax, QWORD PTR [rbp-16]
.L3:
        pop     rbp
        ret