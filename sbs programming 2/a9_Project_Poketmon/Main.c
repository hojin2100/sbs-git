#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>


// enum == 0 "물" type << 자료구조
// HashSet<enum, char*> TypeName' TypeName[enumType]

typedef enum  ElementalType
{
	물,
	풀,
	불,
	번개
}ElementalType;

typedef enum Place
{
	바다,
	숲,
	용암,
	하늘,
}Place;

typedef enum Gender
{
	남성,
	여성,
	불명,
}Gender;

typedef struct Stat
{
	float height;
	float weight;
}Stat;

typedef struct Poketmon
{
	char name[20];
	ElementalType elementalType;
	Place place;
	Stat stat;
	Gender gender;
}Poketmon;

const char* getElementTypeString(ElementalType type) 
{
	switch (type) {
	case 물: 
		return "물";
	case 풀: 
		return "풀";
	case 불:
		return "불";
	case 번개:
		return "번개";
	default: 
		return "알 수 없음";
	}
}

const char* getPlaceString(Place place) 
{
	switch (place) {
	case 바다:
		return "바다";
	case 숲: 
		return "숲";
	case 용암:
		return "용암";
	case 하늘: 
		return "하늘";
	default: 
		return "알 수 없음";
	}
}
const char* getGenderString(Gender gender)
{
	switch (gender)
	{
	case 남성:
		return "남성";
	case 여성:
		return "여성";
	case 불명 :
		return "불명";
	default:
		return "알 수 없음";
	}
}



int main()
{
	Poketmon poketmon;
	int num;

	memset(&poketmon, 0, sizeof(poketmon));

	while (1)
	{
		system("cls");
		printf("포캣몬 도감\n");
		printf(" 1. 꼬부기\n");
		printf(" 2. 이상해씨\n");
		printf(" 3. 리자몽\n");
		printf(" 4. 썬더\n");
		printf(" 0. 종료\n");
		printf("원하는 번호를 입력해주세요\n");

		fflush(stdin);
		// 사용자가 번호를 입력하고 엔터를 눌러야 함
		if (scanf("%d", &num) != 1) {
			// 숫자가 아닌 입력이 들어왔을 때 처리
			printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
			return 0;
		}

		if (num == 0) {
			printf("프로그램을 종료합니다.\n");
			break; // 0 입력 시 while 루프 탈출
		}

		switch (num)
		{

		case 1: //꼬부기
			strcpy(poketmon.name, "꼬부기");
			poketmon.elementalType = 물;
			poketmon.place = 바다;
			poketmon.stat.height = 0.5f;
			poketmon.stat.weight = 9.0f;
			poketmon.gender = 남성;
			break;

		case 2: //이상해씨
			strcpy(poketmon.name, "이상해씨");
			poketmon.elementalType = 풀;
			poketmon.place = 숲;
			poketmon.stat.height = 0.7f;
			poketmon.stat.weight = 6.9f;
			poketmon.gender = 여성;
			break;

		case 3: //리자몽
			strcpy(poketmon.name, "리자몽");
			poketmon.elementalType = 불;
			poketmon.place = 용암;
			poketmon.stat.height = 1.7f;
			poketmon.stat.weight = 90.5f;
			poketmon.gender = 남성;
			break;

		case 4: //썬더
			strcpy(poketmon.name, "썬더");
			poketmon.elementalType = 번개;
			poketmon.place = 하늘;
			poketmon.stat.height = 1.6f;
			poketmon.stat.weight = 52.6f;
			poketmon.gender = 불명;
			break;

		default:
			printf("잘못된 번호입니다\n");
			continue;
		}


		printf("\n----선택한 포캣몬의 정보----\n");
		printf("이름 : %s\n", poketmon.name);
		printf("타입 : %s\n", getElementTypeString(poketmon.elementalType));
		printf("출현장소 : %s\n", getPlaceString(poketmon.place));
		printf("키 : %0.1fm\n", poketmon.stat.height);
		printf("몸무게 : %0.1fkg\n", poketmon.stat.weight);
		printf("성별 : %s\n", getGenderString(poketmon.gender));

		printf("\n뒤로가기 \n");
		printf("아무 키나 눌러주세요");
		_getch();
	}



	return 0;
};