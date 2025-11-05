#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



#define MONSTERCOUNT 5
#define MONSTERRACE 5

typedef enum RACE
{
	ORC,
	HUMAN,
	UNDEAD,
	ANGEL,
	DEVIL,
	NUDEFINED
}RACE;

enum GameText
{
	SCORE,
	COIN,
	HEALTH
}Text;

// #define 점수 = 0 동전 = 1 체력 = 2 사용하는 것이랑 enum 정의하는 것의 차이점이 무엇일까요?

int main()
{
	
	const int count = 10;
	printf("몬스터의 수 : %d\n", MONSTERCOUNT);
	printf("몬스터의 수 : %d\n", count);

	const char* Text[3] = { "SCORE", "COIN", "HEALTH" };
	const char* RaceName[3] = {"ORC", "HUMAN", "UNDEAD"};
	printf("%s\n", Text[SCORE]);
	printf("%s\n", ORC);

	//enum GameText newGameText = SCORE;

	//if (newGameText == SCORE)
	//{
	//	printf("Score\n");
	//}
	//else if (newGameText == COIN)
	//{
	//	printf("COIN\n");
	//}
	//else if (newGameText == HEALTH)
	//{
	//	printf("HEALTH\n");
	//}

	//switch (newGameText)
	//{
	//case SCORE:
	//	printf("Score\n");
	//	break;
	//case COIN:
	//	printf("COIN\n");
	//	break;
	//case HEALTH:
	//	printf("HEALTH\n");
	//	break;
	//default:
	//	break;
	//}
	//RACE race = ORC;
	//
	//switch (race)
	//{
	//case ORC:
	//   printf("ORC\n");
	//   break;
	//case HUMAN:
	//	printf("HUMAN\n");
	//	break;
	//default:
	//	break;
	//}


}