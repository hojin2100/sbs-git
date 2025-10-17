/*
* 날짜  : 2025-10-16
* 학습목표 : 자료형과 변수
* 실습목표 : 실제 게임을 분석해서 자료형을 이해한다.
*
*/

// 자료형ㅇ Data Type
// Data : 숫자, 그림, 기호 정의되어 있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶음.
// 예시 [ 더블킬(문자), 킬수 스코어 정보(정수), 스탯 정보(소수) ]
// 이미지 1920 x 1080, 소리(파장)
// 자료들의 특징에 따라서 형태를 분류 한다. ->Type
// 자료형 : 문자, 정수, 실수
// 자료형을 이용하는 법
// (어떤 타입) "이름" variable 변수 선언
// 함수를 사용하는 법
// int 정수를 표현하는 타입
// float 실수
// char 문자 
// string 문자열

#include <stdio.h>


int main()
{  

	// 더블킬 게임 화면에 출력하고싶음
	// 레드팀과 블루팀의 스코어를 출력하고싶음
	// 챔피언이 가지고 있는 스텟을 출력하고싶음 
	printf(" Red: 10 Blue: 15\n");
	printf("더블킬\n");
	int level = 1;
	int GarenfirstLevelHp = 690;
	float GarenGrowthHp = 98;
	printf("가렌의 정보\n");
	printf("체력          | %d (+%f)\n", GarenfirstLevelHp, GarenGrowthHp);
	printf("현재 체력     : %f \n", GarenfirstLevelHp + (level - 1) * GarenGrowthHp);



	return 0;
}