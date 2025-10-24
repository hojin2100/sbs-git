#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// (1) 가위 바위 보 게임을 한글로 표현해보세요
// - 유저 , 컴퓨터
// 가위, 바위 , 보 중에서 하나를 선택해주세요
// 결과 : 컴퓨터가 무엇을 냈는가 따라서 결과를 달라진다.

/*
* 프로그램 혼자서 작성할 때 권장하는 순서
* 1. 한글로 먼저 어떤 것을 구현할지 주석으로 표현
* 2. 한글로 ㅍ현한 내용을 컴퓨터에게 어떻게 명령할지 직접 작성을 해보세요.
* 2-1 특별한 문법, 헤더를 가져와서 사용한다, 오류가 나는 부분
* 2-2 출력을 해서 결과 성공시켜보기
*/

/*
* 점수를 표현 해보세요 . 유저가 이기면 1점 추가 컴퓨터가 이기면 1점추가
* 
* 버그가 있는 것 같다. 컴퓨터가 무엇을 냈는지 알고싶다. <- 반영. 컴퓨터와 플레이어의 행동을 출력하는 코드를 만들어보세요
* Hint 
*/

int main()
{
	//변수생성
	int user;
	int computer;
	srand(time(NULL));

	while (true)
	{
		//랜덤값설정
		computer = rand() % 3;

		printf("가위바위보게임을 시작합니다.\n");
		printf(" 0. 가위 1. 바위 2. 보\n");
		scanf("%d", &user);

		// 주어진 숫자말고 다른 수를 눌렀을 경우
		if (0 > user || user > 2)
		{
			printf("0~2의 숫자만 입력해주세요\n");
			continue;
		}

		// user의 입력값
		if (user == 0)
		{
			printf("가위");
		}
		else if (user == 1)
		{
			printf("바위");
		}
		else
		{
			printf("보");
		}

		//컴퓨터 랜덤 입력값
		if (computer == 0)
		{
			printf("가위");
		}
		else if (computer == 1)
		{
			printf("바위");
		}
		else
		{
			printf("보");
		}

		printf("를 냈습니다.\n");
	}

	//유저와 컴퓨터의 게임승부결과 
	if (user == computer)
	{
		printf("비겼습니다\n");
	}
	else if (user == 0 && computer == 2 || user == 1 && computer == 0 || user == 2 && computer == 1)
	{
		printf(" 유저가 이겼습니다\n");

	}
	else
	{
		printf("컴퓨터가 이겼습니다\n");
	}



	printf("게임종료\n");
	return 0;
}

		/*
		* 개발이력을 작성 . History
		* 가위,바위,보 게임
		* version 1.0.0 : 가위 바위 보 결과를 출력하는 기능 구현
		* version 1.0.1 : 유저의 입력 기능 구현 + 입력받을 수 없는 숫자를 대입한 경우에 버그가 발생!
		*/
	