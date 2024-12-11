foo(int, int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     DWORD PTR [rbp-28], edx
        cmp     DWORD PTR [rbp-24], 1
        jne     .L2
        mov     eax, DWORD PTR [rbp-20]
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     eax, edx
        jmp     .L3
.L2:
        cmp     DWORD PTR [rbp-24], 0
        jne     .L4
        mov     eax, 0
        jmp     .L3
.L4:
        mov     DWORD PTR [rbp-4], 0
        jmp     .L5
.L7:
        mov     eax, DWORD PTR [rbp-24]
        and     eax, 1
        test    eax, eax
        je      .L6
        mov     eax, DWORD PTR [rbp-20]
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     eax, edx
        add     DWORD PTR [rbp-4], eax
.L6:
        mov     eax, DWORD PTR [rbp-4]
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     DWORD PTR [rbp-4], edx
        mov     eax, DWORD PTR [rbp-20]
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     eax, edx
        add     eax, eax
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     DWORD PTR [rbp-20], edx
        sar     DWORD PTR [rbp-24]
.L5:
        cmp     DWORD PTR [rbp-24], 0
        jne     .L7
        mov     eax, DWORD PTR [rbp-4]
        cdq
        idiv    DWORD PTR [rbp-28]
        mov     eax, edx
.L3:
        pop     rbp
        ret