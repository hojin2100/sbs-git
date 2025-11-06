#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "17_Main.h"

// 플레이어의 좌표 : int 자료형 2개 저장할 수 있게 만들고싶음

typedef struct PlayerPos
{
	int x;
	int y;

}PlayerPos;

typedef struct BattleEntity
{
	int hp;
	int ad;
	int ap;
	int p_def;
	int m_def;
}BattleEntity;

typedef struct Player
{
	PlayerPos pos;
	BattleEntity battleEntity;

}Player;

typedef struct Enemy
{
	int x;
	int y;
	int hp;
	int atk;
}Enemy;

void PrintPos(PlayerPos player);

int main()
{
	// 배열 : 같은 타입의 자료형을 배열을 사용해서 표현
	// 주소 한개로 어떻게 1~n ?
	// 배열을 포인터로 어떻게 설명할 수 있을까? 표현할 수 있을까? (상수 포인터)

	// 구조체. 자료형 선언. 포인터. 배열.
	
	// 구조체를 왜 사용하는가?
	// 사용자 정의 자료형 User Defined Type ->typedef
	// x w좌표 y좌표

	int x = 0;
	int y = 0;

	PlayerPos p1 = { 1 , 2 };
	

	PrintPos(p1);

	Player player;
	PlayerPos startpos = { 0,0 };
	player.pos = startpos;
	BattleEntity batleEntity = { 1,2,3,4,5 };
	player.battleEntity = batleEntity;

	printf("player의 전투요소 [%d , %d, %d, %d, %d\n", player.battleEntity.ad, player.battleEntity.ap, player.battleEntity.hp, player.battleEntity.m_def, player.battleEntity.p_def);
	// 플래이어, 적

	printf("구조체 포인터 사용이유\n");

	printf("구조체의 크기 : %d\n", sizeof(Player*));

	// 기능을 확장하기 위해서 player에 구조체를 계속 추가한다. 
}

//void Battle(Player player, Enemy enemy)

void PrintPos(PlayerPos player) 
{
	printf("플래이어의 위치는 [%d,%d]\n", player.x, player.y);
}
