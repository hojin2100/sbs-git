#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>


#define 몬스터의대사갯수 3


typedef struct Pos
{
	int x;
	int y;
}Pos;

typedef struct Monster
{
	char name[100];
	char dialogue[몬스터의대사갯수][100];
	Pos pos;
}Monster;

typedef enum Location
{
	물, 숲, 산, 들판
}Location;


void MonsterTalking(Monster* a, Monster* b);

void MonsterEncount(Monster* monster, Monster* other, Location location)
{
	bool encount = monster->pos.x == other->pos.x && monster->pos.y == other->pos.y;

	if (!encount)
	{
		printf("[LOG] 두 몬스터의 좌표가 일치하지 않습니다.\n");
	}
	char locationName[100];
	if (location == 숲)
	{
		strcpy(locationName, "숲");
	}
	else if (location == 산)
	{
		strcpy(locationName, "산");
	}
	else
	{
		printf("지정되지 않은 지역입니다. location 조건을 추가해주세요\n");
		return;
	}

	int index = 0;

	printf("%s에서, %s(가) 나타났다.\n" ,locationName, monster->name );

	printf("[%s]: %s", monster->name, monster->dialogue[index]);
}

void MonsterTalking(Monster* a, Monster* b)
{
	for (int index = 0; index < 몬스터의대사갯수, index++;)
	{
		printf("[%s] : %s\n", a->name, a->dialogue[index]);
		printf("[%s] : %s\n", b->name, b->dialogue[index]);
		Sleep(1000);
	}
}

int main()
{
	Monster goblin;
	Location currentLocation = 숲;
	strcpy(goblin.name, "고블린");
	strcpy(goblin.dialogue[0], "고르륵");
	strcpy(goblin.dialogue[1], "숲에서 나가!");
	strcpy(goblin.dialogue[2], "약탈!");
	goblin.pos.x = 1;
	goblin.pos.y = 1;

	MonsterEncount(&goblin,&goblin, currentLocation);
	MonsterTalking(&goblin, &goblin);
}