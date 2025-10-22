#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
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
	const char* name;


	// 조건문 출력 테스트
	// 세미클론 명령이 끝이 났다.
	printf("가위 바위 보 게임 시작! \n");
	scanf("%s", &name);
		// if () ; <- 세미클론 넣지마세요


		// 플레이어가 선택한 결과를 저장
		// 1. 가위 2. 바위 3. 보 (임의의 약속)

		// 가위 -> 이겼다, 비겼다, 졌다
	int playerChoice = 1;
	int computerChoice = 1;
	int playerScore = 0;
	int computerScore = 0;

	if (playerChoice && computerChoice == 3)
	{
		playerScore = playerScore + 1;
		// 조건 - 가위-> 보 "1" -> "3"
		printf("유저가 승리했습니다\n");
	
	}
	else if (playerChoice && computerChoice == 1)
	{
		printf("유저가 비겼습니다\n");
	}
	else if (playerChoice && computerChoice == 2)
	{
		computerScore = computerScore + 1;
		// 조건 - 가위 -> 바위 "1" -> "2"
		printf("유저가 졌습니다.\n");
	}
	else
	{
		printf("error\n");
	}

}