#include "stdafx.h"
#include "windows.h"

int main(int argc, char* argv[]) {
	char cmd[4] = { 'c', 'm', 'd', '\x0' };
	WinExec(cmd, SW_SHOW);
	ExitProcess(1);
}