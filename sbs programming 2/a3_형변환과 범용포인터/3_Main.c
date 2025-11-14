#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3_Main.h"

typedef enum
{
	정수,
	실수,
	데이터
}CustomType;

typedef struct
{
	int value;
	char text[100];
}Data;

void SelectNumberByType(void* selectedPtr, int number)
{

	if (number == 실수)
	{
		//실수
		// 정수값을 저장해서 실수로 변환한다음 출력
		printf("%f\n", *(float*)selectedPtr);
	}
	else if (number == 정수)
	{
		//정수
		printf("%d\n", *(int*)selectedPtr);
	}
	else if (number == 데이터)
	{

	}
	
}

void PointerCastingTest()
{
	CustomType m_type1 = 정수;
	CustomType m_type2 = 실수;
	int a = 10;
	float b = 0.5f;

	SelectNumberByType(&a,m_type1);
	SelectNumberByType(&b, m_type2);
}


int main()
{
	int MaxHP = 100;
	int CurrentHP = MaxHP;
	CurrentHP -= 20;

	float ratio = (float)CurrentHP / MaxHP;


	printf("현재 체력 (%d) / 최대 체력 (%d) = %f\n", CurrentHP, MaxHP, ratio);

	int a = 129;
	char b = (char)a;
	printf("b의 값 : %d\n", b);

	int* aptr = &a;

	printf("aptr의 값 : %d\n", *(char*)aptr);


	void* generalPtr1 = &a;
	void* generalPtr2 = &b;

	printf("generalPtr1의 값 = %d\n", *(int*)generalPtr1);
	printf("generalPtr2의 값 = %d\n", *(int*)generalPtr2);


	int c = 7;
	float d = 0.2f;

	int result = c * d;

	float pivot = (c * d) - (int)(c*d);
	printf("피봇의 값 : %1.f\n", pivot);
	if (pivot < 0.5)
	{
		pivot = 0;
	}
	else
	{
		pivot = 1;

	}
	printf("반올림의 값 : %d\n", (result)+(int)pivot);
}

void PointerCastingTest()
{

}
