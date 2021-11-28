#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	__asm {
		//char buf[5] = { 'c', 'a', 'l', 'c', '\x0' };
		mov         byte ptr[ebp - 5], 63h
		mov         byte ptr[ebp - 4], 61h
		mov         byte ptr[ebp - 3], 6Ch
		mov         byte ptr[ebp - 2], 63h
		//mov         byte ptr[ebp - 1], 0
		xor ebx, ebx
		mov [ebp-1], ebx
		//WinExec(buf, SW_SHOW); -> 7535F57E
		push        5
		lea         eax, [ebp - 5]
		push        eax
		mov	        eax, 0x7535F57E
		call        eax
		//ExitProcess(1); -> 7532BED2
		push        1
		mov	        eax, 0x7532BED2
		call 	    eax
	};
}