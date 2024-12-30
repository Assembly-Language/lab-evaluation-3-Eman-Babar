
INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assembly procedure end now",0
.data
sum DWORD ?

.code
asmfunc PROC ;p1:DWORD, p2:DWORD
    xor eax, eax                    ;clear eax
loop_start:
    cmp ecx, 0                      ;check if ecx is zero
    je loop_end                     ;skip negative numbers
    mov ebx, [esi]                  
    add esi, 4
    cmp ebx, 0
   jle skip_addition
   add eax, ebx
skip_addition:
   dec ecx
   jmp loop_start
loop_end:
   ret
   call Writeint
   call Crlf
   Exit
   asmfunc ENDP
   end 

  