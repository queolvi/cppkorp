partitions(unsigned int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        cmp     DWORD PTR [rbp-20], 1
        jne     .L2
        mov     eax, 1
        jmp     .L3
.L2:
        mov     DWORD PTR [rbp-4], 0
        mov     eax, DWORD PTR [rbp-20]
        mov     DWORD PTR [rbp-8], eax
        mov     DWORD PTR [rbp-12], 0
        jmp     .L4
.L6:
        cmp     DWORD PTR [rbp-12], 1
        jne     .L5
        mov     eax, DWORD PTR [rbp-8]
        shr     eax
        mov     edx, eax
        mov     eax, DWORD PTR [rbp-4]
        add     eax, edx
        add     eax, 1
        mov     DWORD PTR [rbp-4], eax
        add     DWORD PTR [rbp-12], 1
        sub     DWORD PTR [rbp-8], 1
        jmp     .L4
.L5:
        mov     eax, DWORD PTR [rbp-8]
        shr     eax
        mov     edx, eax
        mov     eax, DWORD PTR [rbp-12]
        shr     eax
        add     eax, edx
        add     DWORD PTR [rbp-4], eax
        add     DWORD PTR [rbp-12], 1
        sub     DWORD PTR [rbp-8], 1
.L4:
        mov     eax, DWORD PTR [rbp-8]
        cmp     DWORD PTR [rbp-12], eax
        jb      .L6
        mov     eax, DWORD PTR [rbp-4]
.L3:
        pop     rbp
        ret
        