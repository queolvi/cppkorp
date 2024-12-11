foo(long long, long long, long long):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        mov     QWORD PTR [rbp-16], rsi
        mov     QWORD PTR [rbp-24], rdx
        mov     rdx, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rbp-16]
        add     rax, rdx
        cmp     QWORD PTR [rbp-24], rax
        jge     .L2
        mov     rdx, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rdx
        cmp     QWORD PTR [rbp-16], rax
        jge     .L2
        mov     rdx, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rbp-24]
        add     rax, rdx
        cmp     QWORD PTR [rbp-8], rax
        jge     .L2
        mov     eax, 1
        jmp     .L3
.L2:
        mov     eax, 0
.L3:
        pop     rbp
        ret