#include <stdio.h>
#include <Math.h>

void Add(int num1, int num2)
{
	int result = num1 + num2;
	printf("�� ���� ���� �� : %d + %d = %d\n", num1, num2, result);
}

void MinusFunc(int num1, int num2)
{
	int result = num1 - num2;
	printf("�� ���� �� �� : %d - %d = %d\n", num1, num2, result);
}

void Multiply(int num1, int num2)
{
	int result = num1 * num2;
	printf("�� ���� ���� �� : %d * %d = %d\n", num1, num2, result);
}

void Divide(int num1, int num2)
{
	int result = num1 / num2;
	printf("�� ���� ���� �� : %d / %d = %d\n", num1, num2, result);
}