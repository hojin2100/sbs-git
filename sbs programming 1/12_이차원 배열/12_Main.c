#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�÷��̾�
const char PLAYER = '1';
//����
const char MONSTER = '@';
//��
const char MONEY = '$';
//��
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
			if (y == 0 || y == MAPSIZE - 1)    //or �������� ǥ���ϸ� ���ڴ�. ||
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