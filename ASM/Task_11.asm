foo(Point const&, Point const&):
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        mov     QWORD PTR [rbp-16], rsi
        mov     rax, QWORD PTR [rbp-8]
        mov     rdx, QWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax]
        sub     rdx, rax
        mov     rcx, rdx
        mov     rax, QWORD PTR [rbp-8]
        mov     rdx, QWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax]
        sub     rdx, rax
        imul    rdx, rcx
        mov     rax, QWORD PTR [rbp-8]
        mov     rcx, QWORD PTR [rax+8]
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax+8]
        mov     rsi, rcx
        sub     rsi, rax
        mov     rax, QWORD PTR [rbp-8]
        mov     rcx, QWORD PTR [rax+8]
        mov     rax, QWORD PTR [rbp-16]
        mov     rax, QWORD PTR [rax+8]
        sub     rcx, rax
        mov     rax, rsi
        imul    rax, rcx
        add     rax, rdx
        pop     rbp
        ret