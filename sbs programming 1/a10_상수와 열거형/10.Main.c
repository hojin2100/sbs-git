#include "Math.h"


/*
* const 키워드 : 뒤에 오는 수식어를 고정시킨다. 변수의 값을 고정시킨다? 상수
*/


void CalculateCircleArea();
void CalculateCircleDiameter();
const double PI = 3.14;

int main()
{
	CalculateCircleArea();
	CalculateCircleDiameter();
}

void CalculateCircleArea()
{
	//const double pi = 3.14;   //******* 이 값은 변경되면 안되는 값 ********
	double radius;
	printf("반지름의 길이를 입력해주세요 :");
	scanf("%1f", radius);
	double circleArea = PI * radius * radius;
	printf("원의 넓이를 : %1f", circleArea);
}

void CalculateCircleDiameter()
{
	//const double pi = 3.14;   //******* 이 값은 변경되면 안되는 값 ********
	double radius;
	printf("반지름의 길이를 입력해주세요 :");
	scanf("%1f", radius);
	double circleArea = PI * radius * radius;
	printf("원의 넓이를 : %1f", circleArea);
}