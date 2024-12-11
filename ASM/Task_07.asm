foo(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     eax, DWORD PTR [rbp-20]
        cdq
        idiv    DWORD PTR [rbp-24]
        mov     DWORD PTR [rbp-4], edx
        cmp     DWORD PTR [rbp-4], 0
        jns     .L2
        mov     eax, DWORD PTR [rbp-24]
        mov     edx, eax
        neg     edx
        cmovns  eax, edx
        add     DWORD PTR [rbp-4], eax
.L2:
        mov     eax, DWORD PTR [rbp-4]
        pop     rbp
        ret
bar(int, int):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 24
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     edx, DWORD PTR [rbp-24]
        mov     eax, DWORD PTR [rbp-20]
        mov     esi, edx
        mov     edi, eax
        call    foo(int, int)
        mov     DWORD PTR [rbp-4], eax
        jmp     .L5
.L6:
        mov     eax, DWORD PTR [rbp-24]
        mov     DWORD PTR [rbp-20], eax
        mov     eax, DWORD PTR [rbp-4]
        mov     DWORD PTR [rbp-24], eax
        mov     edx, DWORD PTR [rbp-24]
        mov     eax, DWORD PTR [rbp-20]
        mov     esi, edx
        mov     edi, eax
        call    foo(int, int)
        mov     DWORD PTR [rbp-4], eax
.L5:
        cmp     DWORD PTR [rbp-4], 0
        jne     .L6
        mov     eax, DWORD PTR [rbp-24]
        leave
        ret