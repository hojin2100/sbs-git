#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

void PlayerControl()
{

}
void Update()
{

}
void Render()
{

}
void Quit()
{
	int input = 0;
	scanf("%d", &input);
	if (input == 5)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main()
{
	int input = 0;

	while (1) //게임 루프
	{
		// 로직
		// 조작하는 함수 
		// update
		// 렌더

		PlayerControl();
		Update();
		Render();
		if (Quit)
		{
			break;
		}
	}
}