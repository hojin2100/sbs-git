#include "Math.h"


/*
* const Ű���� : �ڿ� ���� ���ľ ������Ų��. ������ ���� ������Ų��? ���
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
	//const double pi = 3.14;   //******* �� ���� ����Ǹ� �ȵǴ� �� ********
	double radius;
	printf("�������� ���̸� �Է����ּ��� :");
	scanf("%1f", radius);
	double circleArea = PI * radius * radius;
	printf("���� ���̸� : %1f", circleArea);
}

void CalculateCircleDiameter()
{
	//const double pi = 3.14;   //******* �� ���� ����Ǹ� �ȵǴ� �� ********
	double radius;
	printf("�������� ���̸� �Է����ּ��� :");
	scanf("%1f", radius);
	double circleArea = PI * radius * radius;
	printf("���� ���̸� : %1f", circleArea);
}