foo(unsigned long long):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-24], rdi
        mov     DWORD PTR [rbp-4], 0
        jmp     .L2
.L4:
        mov     rax, QWORD PTR [rbp-24]
        and     eax, 1
        test    rax, rax
        je      .L3
        add     DWORD PTR [rbp-4], 1
.L3:
        shr     QWORD PTR [rbp-24]
.L2:
        cmp     QWORD PTR [rbp-24], 0
        jne     .L4
        mov     eax, DWORD PTR [rbp-4]
        and     eax, 1
        test    eax, eax
        sete    al
        pop     rbp
        ret