#include "console_color.h"
#include <Windows.h>

void SetColor(Color text_color, Color bg_color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (bg_color << 4 | text_color));
}

void ResetColor()
{
	SetColor(Èò»ö, °ËÁ¤);
}