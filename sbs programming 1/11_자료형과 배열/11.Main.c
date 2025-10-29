#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 어떤 점이 장점이 되는가?
// 기존 방식, 새로운 방식 둘다 사용. 
// obsolete : 더이상 쓸모x 지원 x
// 이 코드를 사용하면 경고가 뜨면, 이거 이제 지원 안해줄꺼니 새로운 문법써

// 반복문. 

// 중괄호는 영역을 표현하는 녀석
// 함수 헤더() => {    };
// 자료형 int x 100개 {     }


int main()
{
	// 반복적으로 사용되는 자료형을 배열로 표현한다. 코드를 개선하기 위함
	// 배열 사용(1)
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	int numsArray[] = { 0,1,2,3 };
	printf("값 : %d\n", numsArray[0]); // 첫번째 표현인데 왜 1이 아니고 0일까?

	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 값 : %d\n", i, numsArray[i]);
	}
	// 배열 사용(2)

	int numsArray2[100]; // int형 자료형이 100개 저장될 수 있는 공간을 선언한다. int 형 배열의 크기가 100인 녀석이다.
	int numsArray3[40] = { 0,1,2,3 };
	//sizeof(변수의 이름) -> 바이트의 크기를 반환 해줍니다.

	printf("numsArray 의 크기 : %d 개\n", sizeof(numsArray) / sizeof(int));
	printf("numsArray2 의 크기 : %d Byte\n", sizeof(numsArray2));
	printf("numsArray3 의 크기 : %d Byte\n", sizeof(numsArray3));
	// 배열을 선언하는 방법
	// 자료형 이름[] = { };
	// 자료형 이름[숫자] = { }; 갯수가 안맞는 경우
	// 자료형 이름[숫자];

	// 문자를 직접 표현, 
	// 플레이어의 이름 : 설정
	// 플레이어 이름을 저장할 수 있는 공간을 만들고, 이 공간에 입력받은 데이터를 저장하고싶다.

	// int a; scanf(%a);
	// char c; scanf(%c); // 문자 기호 하나만 표현

	char c1 = 'H';
	char c2 = 'I';
	printf("%c%c\n", c1, c2);

	char text[] = "안녕"; 
	printf("text의 크기 : %11u\n", sizeof(text));

	// " "; literal 문자 ('') ('') -> '\0'(널문자) 문자의 끝을 표현하고 있음.
	// 왜 문자의 끝을 표현을 해줘야 하는가? <-
	
	// 반복문을 사용해서 문자가 끝이 났는지 확인하는 코드를 작성해봅시다.


	char str[50];
	int index = 0;
	printf("문자열 입력\n");
	scanf("%s", str); // 왜 str은 주소 연산자를 안쓰나요? => 

	while (str[index] == '\0') // str들어있는 문자를 모두 출력하세요 // <- == printf("안녕하세요");
	{
		printf("%c", str[index]);
		index++;
	}

	// char arr1[] = {'h', 'i'}; => 문자의 배열
	// char arr2[] \ {'h', 'i', '\0'}; => 문자열

	// NPC대화를 하는데 NPC 첫번째 대화를 했을 때 할 말 dialouge -> '안' '녕' 

	// 문자의 입력을 받아서 비교
	// 리터럴 문자 저장되는 영역 따로 존재한다.
	char name[10];

	printf("리터널문자의 주소 : %x", "안녕하세요");

	scanf("%s", name); 
	
	// 문자열 비교 -> name 10개의 char 데이터를 저장할 수 있는 영역을 생성.

	if (name == "가위")        
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}

	// name "리터럴문자" 주소가 다르다. 저장되는 영역이 다르기 때문.
	// 문자열의 비교 함수로 만들어본다. 실행할 수 있게 본다.

	// name 가위 들어있는 내용은 같다. '가' '위' '\0' => 같다 알려주는 함수 bool IsStrCompare
}