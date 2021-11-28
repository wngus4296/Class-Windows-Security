#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	__asm {
		//cmd
		mov byte ptr[ebp - 4], 63h
		mov byte ptr[ebp - 3], 6Dh
		mov byte ptr[ebp - 2], 64h
		// mov byte ptr[ebp - 1], 0
		xor ebx, ebx // 같으면 0이 되는 xor의 속성을 이용해 ebx값을 0으로 변경
		mov [ebp - 1], ebx
		// call WinExec('cmd', SW_SHOW)
		push 5
		lea eax, [ebp - 4]
		push eax
		mov eax, 0x7572F57E
		call eax
		// call ExitProcess(1)
		push 1
		mov eax, 0x756FBED2
		call eax
	};
}