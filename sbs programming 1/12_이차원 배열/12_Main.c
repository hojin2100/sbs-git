#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//플레이어
const char PLAYER = '1';
//몬스터
const char MONSTER = '@';
//돈
const char MONEY = '$';
//벽
const char WALL = '#';

#define MAPSIZE 10

int main()
{

	char STAGE[MAPSIZE][MAPSIZE * 2] =
	{
		""
	};

	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE * 2; x++)
		{
			if (y == 0 || y == MAPSIZE - 1)    //or 조건으로 표현하면 좋겠다. ||
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else
				{
					STAGE[y][x] = WALL;
				}
			}
			else
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else if (x == 0 || x == MAPSIZE * 2 - 2)
				{
					STAGE[y][x] = WALL;
				}
				else
				{
					STAGE[y][x] = ' ';
				}
			}
		}
	}
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);
	}
	
}