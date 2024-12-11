foo(int):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 3896
        mov     DWORD PTR [rbp-4004], edi
        cmp     DWORD PTR [rbp-4004], 0
        js      .L2
        cmp     DWORD PTR [rbp-4004], 999
        jle     .L3
.L2:
        mov     eax, 0
        jmp     .L5
.L3:
        lea     rdx, [rbp-4000]
        mov     eax, 0
        mov     ecx, 500
        mov     rdi, rdx
        rep stosq
        mov     DWORD PTR [rbp-4000], 1
        mov     DWORD PTR [rbp-3996], 2
        mov     DWORD PTR [rbp-3992], 3
        mov     DWORD PTR [rbp-3988], 4
        mov     DWORD PTR [rbp-3984], 5
        mov     DWORD PTR [rbp-3980], 6
        mov     eax, DWORD PTR [rbp-4004]
        cdqe
        mov     eax, DWORD PTR [rbp-4000+rax*4]
.L5:
        leave
        ret