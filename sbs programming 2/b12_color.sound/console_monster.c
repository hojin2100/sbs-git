#include <stdio.h>
#include "console_color.h"
#include "console_monster.h"

void RenderMonster(const Monster* monster)
{
	SetColor(monster->text_color, monster->bg_color);
	printf("%s\n", monster->shape);
	ResetColor();
}