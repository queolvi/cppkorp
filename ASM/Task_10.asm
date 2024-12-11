foo(unsigned int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     eax, DWORD PTR [rbp-20]
        mov     DWORD PTR [rbp-4], eax
        jmp     .L2
.L7:
        mov     ecx, DWORD PTR [rbp-4]
        mov     edx, ecx
        mov     eax, 3435973837
        imul    rax, rdx
        shr     rax, 32
        mov     edx, eax
        shr     edx, 3
        mov     eax, edx
        sal     eax, 2
        add     eax, edx
        add     eax, eax
        sub     ecx, eax
        mov     edx, ecx
        mov     DWORD PTR [rbp-12], edx
        mov     eax, DWORD PTR [rbp-4]
        mov     edx, eax
        mov     eax, 3435973837
        imul    rax, rdx
        shr     rax, 32
        shr     eax, 3
        mov     DWORD PTR [rbp-8], eax
        jmp     .L3
.L6:
        mov     ecx, DWORD PTR [rbp-8]
        mov     edx, ecx
        mov     eax, 3435973837
        imul    rax, rdx
        shr     rax, 32
        mov     edx, eax
        shr     edx, 3
        mov     eax, edx
        sal     eax, 2
        add     eax, edx
        add     eax, eax
        sub     ecx, eax
        mov     edx, ecx
        mov     DWORD PTR [rbp-16], edx
        mov     eax, DWORD PTR [rbp-16]
        cmp     eax, DWORD PTR [rbp-12]
        jne     .L4
        mov     eax, 1
        jmp     .L5
.L4:
        mov     eax, DWORD PTR [rbp-8]
        mov     edx, eax
        mov     eax, 3435973837
        imul    rax, rdx
        shr     rax, 32
        shr     eax, 3
        mov     DWORD PTR [rbp-8], eax
.L3:
        cmp     DWORD PTR [rbp-8], 0
        jne     .L6
        mov     eax, DWORD PTR [rbp-4]
        mov     edx, eax
        mov     eax, 3435973837
        imul    rax, rdx
        shr     rax, 32
        shr     eax, 3
        mov     DWORD PTR [rbp-4], eax
.L2:
        cmp     DWORD PTR [rbp-4], 0
        jne     .L7
        mov     eax, 0
.L5:
        pop     rbp
        ret
bar(unsigned int):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 24
        mov     DWORD PTR [rbp-20], edi
        mov     eax, DWORD PTR [rbp-20]
        add     eax, 1
        mov     DWORD PTR [rbp-4], eax
        jmp     .L9
.L10:
        add     DWORD PTR [rbp-4], 1
.L9:
        mov     eax, DWORD PTR [rbp-4]
        mov     edi, eax
        call    foo(unsigned int)
        test    al, al
        jne     .L10
        mov     eax, DWORD PTR [rbp-4]
        leave
        ret