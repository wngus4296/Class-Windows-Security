#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	char buf[8] = { 'n','o','t','e','p','a','d','\x0' };
	WinExec(buf, SW_SHOW);
	ExitProcess(1);
}