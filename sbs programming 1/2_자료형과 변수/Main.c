/*
* ��¥  : 2025-10-16
* �н���ǥ : �ڷ����� ����
* �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*
*/

// �ڷ����� Data Type
// Data : ����, �׸�, ��ȣ ���ǵǾ� ���� ���� ����
// ��ǻ�Ϳ��� ����� ������ ����.
// ���� [ ����ų(����), ų�� ���ھ� ����(����), ���� ����(�Ҽ�) ]
// �̹��� 1920 x 1080, �Ҹ�(����)
// �ڷ���� Ư¡�� ���� ���¸� �з� �Ѵ�. ->Type
// �ڷ��� : ����, ����, �Ǽ�
// �ڷ����� �̿��ϴ� ��
// (� Ÿ��) "�̸�" variable ���� ����
// �Լ��� ����ϴ� ��
// int ������ ǥ���ϴ� Ÿ��
// float �Ǽ�
// char ���� 
// string ���ڿ�

#include <stdio.h>
#include <Windows.h>
void gotoxy(int x, int y) 
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{  
	system("cls");
	// ����ų ���� ȭ�鿡 ����ϰ����
	// �������� ������� ���ھ ����ϰ����
	// è�Ǿ��� ������ �ִ� ������ ����ϰ����
	gotoxy(20 , 0); 
	printf(" Red: 10 Blue: 15\n");
	gotoxy(10, 2);
	printf("����ų\n");
	gotoxy(10, 10);
	int level = 1;
	int GarenfirstLevelHp = 690;
	float GarenGrowthHp = 98;
	printf("������ ����\n");
	printf("ü��          | %d (+%f)\n", GarenfirstLevelHp, GarenGrowthHp);
	printf("���� ü��     : %f \n", GarenfirstLevelHp + (level - 1) * GarenGrowthHp);



	return 0;
}