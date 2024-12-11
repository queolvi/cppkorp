foo(something*):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-24], rdi
        cmp     QWORD PTR [rbp-24], 0
        jne     .L2
        mov     eax, 0
        jmp     .L3
.L2:
        mov     rax, QWORD PTR [rbp-24]
        mov     QWORD PTR [rbp-8], rax
        mov     rax, QWORD PTR [rbp-24]
        mov     QWORD PTR [rbp-16], rax
        jmp     .L4
.L6:
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+8]
        mov     QWORD PTR [rbp-8], rax
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax+8]
        mov     rax, QWORD PTR [rax+8]
        mov     QWORD PTR [rbp-16], rax
        mov     rax, QWORD PTR [rbp-8]
        cmp     rax, QWORD PTR [rbp-16]
        jne     .L4
        mov     eax, 1
        jmp     .L3
.L4:
        cmp     QWORD PTR [rbp-16], 0
        je      .L5
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax+8]
        test    rax, rax
        jne     .L6
.L5:
        mov     eax, 0
.L3:
        pop     rbp
        ret