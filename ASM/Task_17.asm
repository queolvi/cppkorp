foo(TreeNode*, long, long):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        mov     QWORD PTR [rbp-8], rdi
        mov     QWORD PTR [rbp-16], rsi
        mov     QWORD PTR [rbp-24], rdx
        cmp     QWORD PTR [rbp-8], 0
        jne     .L2
        mov     eax, 1
        jmp     .L3
.L2:
        mov     rax, QWORD PTR [rbp-8]
        mov     eax, DWORD PTR [rax]
        cdqe
        cmp     QWORD PTR [rbp-16], rax
        jge     .L4
        mov     rax, QWORD PTR [rbp-8]
        mov     eax, DWORD PTR [rax]
        cdqe
        cmp     QWORD PTR [rbp-24], rax
        jg      .L5
.L4:
        mov     eax, 0
        jmp     .L3
.L5:
        mov     rax, QWORD PTR [rbp-8]
        mov     eax, DWORD PTR [rax]
        movsx   rdx, eax
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+8]
        mov     rcx, QWORD PTR [rbp-16]
        mov     rsi, rcx
        mov     rdi, rax
        call    foo(TreeNode*, long, long)
        test    al, al
        je      .L6
        mov     rax, QWORD PTR [rbp-8]
        mov     eax, DWORD PTR [rax]
        movsx   rcx, eax
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax+16]
        mov     rdx, QWORD PTR [rbp-24]
        mov     rsi, rcx
        mov     rdi, rax
        call    foo(TreeNode*, long, long)
        test    al, al
        je      .L6
        mov     eax, 1
        jmp     .L8
.L6:
        mov     eax, 0
.L8:
        nop
.L3:
        leave
        ret
bar(TreeNode*):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     QWORD PTR [rbp-8], rdi
        mov     rax, QWORD PTR [rbp-8]
        movabs  rdx, 9223372036854775807
        movabs  rcx, -9223372036854775808
        mov     rsi, rcx
        mov     rdi, rax
        call    foo(TreeNode*, long, long)
        leave
        ret