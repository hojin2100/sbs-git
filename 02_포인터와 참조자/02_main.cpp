#include <iostream>
#include <cstdio>
#include <strstream>

using namespace std;

void MySwap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

void MySwap(int* a, int* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

int& RefExample(int& mainRef)
{
	int temp = mainRef++;
	return temp;
}
struct Pos
{
	int x;
	int y;
};

void ChangePos(Pos& pos, int addXValue, int addYValue)  // 임시로 가져올 값 - 그냥 임시 변수
{
	pos.x += addXValue;
	pos.y -= addYValue;
	
}

// 포인터를 대체 할 수 있는가?
// 참조자로는 표현할 수 있는 내용이 있다 - 참조자가 null이 될 수 없다.

// fp* 폴더의 파일 이름이 없으면 실행하지 마라

// 함수 안에서 값을 변경하는 코드는 참조라를 쓰겠다. 코딩 스타일 

// 포인터를 사용하는 이유 
// 함수 안에서 데이터를 변경할 수 있게 한다.
// 효율적으로 데이터를 전달 하고 사용 할 수 있다.

void ShowPos(const Pos& pos)
{
	pos.x;
}

/* 
* 아래 내용을 정리
* (1) 포인터를 사용하는 이유
*  주소를 통해서 메모리 소비를 줄이기위함
* (2) 참조자를 사용할 때의 주의 사항
* 
* (3) 포인터와 참조자를 같이 사용해야 하는 이유
* 
*/

// 참조자를 이용해서 값을 변경하는 예제를 구현해보세요.
// 참조자를 이용해서 값ㅇ르 변경하지 않는 예제 구현
int main()
{

	int a = 10;



	cout << "\n2-3 Swap함수의 예제 " << endl;

	int b1{};
	int b2{};
	cin >> b1;
	cin >> b2;

	cout << "b1의 값 : " << b1 << endl;
	cout << "b2의 값 : " << b2 << endl;
	MySwap(b1, b2);
	cout << "b1의 값 : " << b1 << endl;
	cout << "b2의 값 : " << b2 << endl;


	cout << "\n2-4 참조자 " << endl;

	// 선언 방법
	int& aRef = a;
	int* c_ptr{};

	c_ptr = new int;
	cout << c_ptr << endl;
	int*& c_ptrRef = c_ptr;
	delete c_ptr;
	cout << c_ptrRef << endl;

	int* c2_ptr{};
	c2_ptr = new int;
	int* c2_ptr2 = c2_ptr;  //복제
	cout << c2_ptr << endl;
	delete c2_ptr;
	cout << c2_ptr2 << endl;

	// 주소를 생성할 때 복제를 할 수 있고 , 참조를 할 수 있음
	// cpp 매우 빠른 코드

	// 참조자 사용 시 주의사항
	// 1. 참조자는 선언과 동시에 초기화를 해줘야한다.

	// int& myRef;
	// const int& myRef = 10;

	// 2. 함수에서 반환하는 값이 소멸되지 않도록 해야한다.

	int mainNum = 10;
	int& refValue = RefExample(mainNum); // refValue RefExample 함수안에 있는 temp의 별명

	cout << refValue << endl; // 컴파일러 Undefined 정의 되지 않은 코드는 알아서 수정하도록.

	Pos myPos{};
	ChangePos(myPos, 2, 5);

	cout << "X : " << myPos.x << "\n Y : " << myPos.y << endl;
}