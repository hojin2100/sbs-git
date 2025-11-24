#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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
	숲,
	바다,
	용암,
	하늘,
}Place;

typedef struct Stat
{
	int age;
	int height;
	float weight;
	char gender;
}Stat;



typedef struct Poketmon
{
	char name[20];
	ElementalType elementalType;
	Place place;
	Stat stat;
}Poketmon;

char* ReturnTextByEnum(ElementalType type)
{
	char typename[100];

	if (type == 물)
	{
		strcpy(typename, "물");
	}

	return typename;
}

int main()
{
	Poketmon poketmon;
	poketmon.elementalType = 물;

	char typename[100];

	if (poketmon.elementalType == 물)
	{
		strcpy(typename,"물");
	}

	printf("포켓몬의 타입은 %s\n", typename);

	//printf("포켓몬의 스탯 ")
}