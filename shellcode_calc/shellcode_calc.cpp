#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	char buf[5] = { 'c', 'a', 'l', 'c', '\x0' };
	WinExec(buf, SW_SHOW);
	ExitProcess(1);
}