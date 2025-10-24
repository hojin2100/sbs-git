// 메인 함수.
// 프로그램을 시작과 끝을 표현하는 기능을 하고있다.

// 함수를 먼저 생성 -> 생성한 함수를 사용
// 반환타입 + 함수이름 (매개변수); - 작업을 통해서만 함수가 생성


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Math.h"




int main()
{
	int num1 = 1;
	int num2 = 2;

	Add(num1, num2); // statement (명령'문') Add 함수에 num1, num2를 인자로서 실행하라
	Add(3, 5);       // Add 함수를 3-> num1 , 5-> num2 Add 함수를 실행하라
	MinusFunc(5, 3);
	Multiply(3, 5);
	Divide(6, 3);

	// 플레이어가 낸 가위 바위 보에 해당 하는 숫자를 출력하고 싶다.
	int playerchoice =SelectPlayerBehavior(); // 1. 가위 2. 바위 3. 보
	printf("플레이어의 선택 값 : %d\n", playerchoice);
	//캐릭터의 초기 스텟 설정
	SelectCharacter(10);

	return 0;  // 게임에서 종료기능 만들고싶음 . return하도록 만들면 됨 . 어떤 숫자를 입력하면 프로그렘을 종료하게 만들때
}

//캐릭터를 선택해서 스텟을 분해한다던가 하는 함수
// Dice_ STR, DEX, INT, LUK 분배

/*
* 반환값이 void 함수를 왜 사용할까?
* 반환값이 없더라도 코드를 수정할 수 있는가? _ 주소의 개념을 이해하면                                  -Value vs Reference  
* 함수 안에서만 코드가 실행이 되고 실제로는 변경이 안되는 기능이 필요하다. (ex) UI 다음 레벨을 보여주는 기능이 실제로 장비의 성능일 변경시키면?
* 
*/

// 스탯 포인트를 분배해서 STR,DEX,INT,LUK 잘 출력이 되도록 만들어보세요
// startPoint 보다 넘는 값을 실행해서는 안됩니다
// 분배한 스탯이 main에서도 사용될려면 어떻게 해야할까?
void SelectCharacter(int startPoint)
{
	printf("%d 스탯포인트를 분배해주세요\n");
	printf("STR : 0 DEX : 1 INT : 2 LUK : 3 \n");
	int selectNumber = 0;
	int remainPoint;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	scanf("%d", &selectNumber);
	if (selectNumber == 0)
	{
		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		STR = STR + spendPoint;

	}
	else if (selectNumber == 1)
	{
		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		DEX = DEX + spendPoint;

	}
	// remainPoint < spendPoint 이 경우를 어떻게 탈출할 것인가?
	// 어떤 타이밍에 return을 하고 아래 코드를 실행할 것인가? 조건문으로 구현
}


int SelectPlayerBehavior()
{
	int num = 0;
	scanf("%d", &num);

	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 2;
	}
	else if (num == 3)
	{
		return 3;
	}
	
}