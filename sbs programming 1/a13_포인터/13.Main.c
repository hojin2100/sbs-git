#include <stdio.h>

void Add(int *value);
void Minus(double* valuePtr);

int main()
{
	int a = 10; // a이름에 int 자료형을 저장하겠다
	Add(&a);
	//scanf("%d",&a);
	printf("&a의 컴퓨터가 보고있는 숫자 : %p\n", &a);

	// 포인터 선언

	int *aPtr = &a; // 포인터 선언 '*' 주소를 저장할 수 있게 됨.  & 없을때  16진수를 읽는 방법이 잘못 됨
	int value = *aPtr;     // 역참조 연산자 (*)

	printf("value 값 : %d\n", value);

	// 포인터는 포인터 타입으로 사용해야 함
	// value타입과 pointer(주소)를 구분해서 사용해야 한다.

	char b = 'b'; // 
	//pritnf("b를 숫자로 출력 해 : %d\n", b);
	char* bPtr = &b;  // bPtr char 주소를 저장하는 포인터 (변수)
	bPtr = &a;        // bPtr 주소 변수에 a의 주소를 저장하라

	printf("bPtr의 값 :%d\n", *bPtr);

	// (1) 포인터 주소를 선언할 수 있다
	// (2) 주소를 이용해서 주소에 저장된 값을 불러올 수 있다.
	// (3) 변수에 저장된 주소를 사용할 수 있다.

	// double 저장할 수 있는 c변수 선언하고, 
	// (1) (2) (3) 을 이용해서 cPtr 이용하여 값을 출력해보세요

	double c = 0.25;
	double* const cPtr = &c;
	Minus(cPtr);
	printf("cPtr에 저장된 값 = %.2lf\n", *cPtr);

	// 포인터에 대한 깊은 이해
	// (1) 포인터도 변수다. 포인터에 다른 주소를 저장할 수 있다.

	

	//cPtr = &b; // cPtr = 주소를 저장하는데 실수의 주소를 읽어온다.  bPtr = 정수의 주소를 읽어온다.
	printf("cPtr에 저장된 값 = %d\n", *cPtr);

	// 0101010 (1.m) * 2^n
	// 컴퓨터의 눈에는 0,1 밖에 안보인다. 자료형을 선언해서 컴퓨터가 어떻게 해석할지 정해준다.

	// Pointer 주소를 저장하는 녀석이 자료형에 대한 주소다.
	// int* numPtr; 주소를 저장하는녀석이다. + 시작점[AA AA AA AA]
	// int a = 10;
	// double *doublePtr; doublePtr = &a;
	// 주소를 알고 그 주소에서 어디 까지 해석해야 하는지에 대한 정보를 알고 있으면
	// 컴퓨터에서 정보를 가져올 수 있다.
	// (1) 함부로 다른 타입의 주소를 넘겨주면 예측할 수 없는 오류가 발생할 수 있다.
	// (2) 정수의 주소를 넘겨받아서 비트를 이용해서 코드를 짜는 예제.

	// 포인터에 const를 사용하면 -> 포인터 주소를 변경하지 못하게 막을 수 있을까?
	
	// *포인터 변수 -> 포인터가 가르키고 있는 값을 변경하지 못하게 막을 수 있을까? 




}


void Add(int *value) // 1개 보다 많다면?
{
	*value += 3; // value주소에 저장 되어 있는 값을 3 더하라


}

void Minus(double *valuePtr)
{
	*valuePtr -= 0.25;
}

// player x,y 좌표
// 메인 함수에서 실행
// 함수에서 변경하고 그 변경된 값을 메인에 있는 값에도 변경이 되도록 하고싶음

void PlayerMove() // playerx 주소, playery 주소
{

}