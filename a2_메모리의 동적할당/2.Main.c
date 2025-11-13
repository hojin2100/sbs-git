#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int number;
	char* name;
}Student;

// Item Inventory 구조체를 만들어보세요
// 몬스터를 처치 -> 인벤토리에 보상 저장
// Reward() << Inventory << Item
// 동적으로 변할 수 있도록 설정
// 내 아이템의 크기를 변경해주는 함수. Set MyInventory()


// char A[100] 배열로 표현하는 것과 -> 컴파일러가 주소를 직접 배정을 해줌. 정적할당.
// char* Ab = malloc(sizeof(Ab)* 100); -> 실행 중에 메모릴를 할당한다 . 동적할당

// 동적할당 왜 필요한가요?
// 인벤토리. 몬스터의 보상을 저장을 한다 . 아이템 1개
// 인벤토리의 공간을 얼마나 할당을 해야하나요? 
// 적정한 인벤토리의 갯수? 80개
// 이 게임은 진행하는 동안 평생 80개 까지만 저장 가능
// 아이템 공간 확장 기능. 80 -> 90 
// 

void Test()
{
	int a;
	printf("a의 주소 : &p\n", &a);
	char* name;  // 주소를 저장하는 타입인데 주소가 저장되어 있지않다. (초기화되어 있지않음)
	name = malloc(sizeof(char) * 100); // 주소를 직접 지정을 해주겠다.(프로그래머의 명령문)
    printf("name 주소 : &p\n", &name);
	// 주소를 변수만들 때 무조건 생성x
	// 어떤 Type 선언할 때 그 데이터를 저장할 수 있는 주소를 만들어짐
	char nameArray[100]; // 주소가 만들어 져있음
	//scanf("%d", &a);
}

void SetStudentInfo(Student* student)
{
	printf("학생의 이름을 작성해주세요 : \n");
	char* temp = malloc(sizeof(char) * 100);
	scanf("%s", temp);

	// student 학생의 char 주소에 이름을 저장하고싶음
	// student-> name 주소는 지금 컴퓨터 메모리에 할당되어 있지않은 상태
	// 메모리 할당을 어떻게 할 수 있나요? malloc 함수

	student->name = malloc(sizeof(char) * 100);
	strcpy(student->name, temp); // 2 error
	printf("학생의 번호를 작성해주세요 : ");
}

void PrintStudentinfo(Student* student)
{
	printf("학생의 번호 : %d ,  학생의 이름 : %s\n", student->number, student->name);
}

int main()
{
	while (1)
	{
		Test();
	}
}