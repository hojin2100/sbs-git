#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "console_color.h"
#include "console_monster.h"



int main()
{
	Monster mo1;
	mo1.text_color = 파란;
	mo1.bg_color = 검정;
	strcpy(mo1.shape, "@");


	Monster mo2;
	mo2.text_color = 검정;
	mo2.bg_color = 빨강;

	RenderMonster(&mo1);
	RenderMonster(&mo2);

	//SetColor(빨강, 파란);
	printf("color");
}