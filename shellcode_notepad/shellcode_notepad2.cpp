#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	__asm {
		//char buf[8] = {'n','o','t','e','p','a','d','\x0'} 
		mov			byte ptr[ebp - 8], 6Eh  // 'n'	
		mov         byte ptr[ebp - 7], 6Fh  // 'o'
		mov         byte ptr[ebp - 6], 74h  // 't'
		mov         byte ptr[ebp - 5], 65h  // 'e'
		mov         byte ptr[ebp - 4], 70h  // 'p'
		mov         byte ptr[ebp - 3], 61h  // 'a'
		mov         byte ptr[ebp - 2], 64h  // 'd'
		mov         byte ptr[ebp - 1], 0  // '\x0'
		///WinExec(buf, SW_SHOW); 
		push        5  // SW_SHOW
		lea         eax, [ebp - 8]  // eax에 'buf'문자열 저장
		push        eax  // 스택에 'buf'문자열 주소 push
		mov   	     eax, 0x7535F57E  //eax에 winExec 함수 주소 저장
		call        eax // WinExec 함수 실행
		//ExitProcess(1);
		push        1  // 1
		mov         eax, 0x7532BED2 // eax에 ExitProcess 함수 주소 저장
		call        eax  // ExitProcess 함수 실행
	};
}