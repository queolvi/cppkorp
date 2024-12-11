foo(ListNode*):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-24], rdi
        mov     rax, QWORD PTR [rbp-24]
        mov     QWORD PTR [rbp-8], rax
        mov     DWORD PTR [rbp-12], 0
        jmp     .L2
.L3:
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+8]
        mov     QWORD PTR [rbp-8], rax
        add     DWORD PTR [rbp-12], 1
.L2:
        cmp     QWORD PTR [rbp-8], 0
        jne     .L3
        mov     eax, DWORD PTR [rbp-12]
        pop     rbp
        ret