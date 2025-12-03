#pragma once

typedef struct Monster
{
	Color text_color;
	Color bg_color;
	char shape[10];


}Monster;

void RenderMonster(const Monster* monster);