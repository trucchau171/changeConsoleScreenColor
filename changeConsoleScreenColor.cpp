#include <windows.h>

void DefineColorScreen()
{
	CONSOLE_SCREEN_BUFFER_INFOEX sbInfoEx;
	sbInfoEx.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfoEx(screen, &sbInfoEx);
	sbInfoEx.ColorTable[0] = RGB(27, 61, 87); // screen rgb color
	SetConsoleScreenBufferInfoEx(screen, &sbInfoEx);

	SetConsoleTextAttribute(screen, 15); // change console text color
}