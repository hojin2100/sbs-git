// ���� �Լ�.
// ���α׷��� ���۰� ���� ǥ���ϴ� ����� �ϰ��ִ�.

// �Լ��� ���� ���� -> ������ �Լ��� ���
// ��ȯŸ�� + �Լ��̸� (�Ű�����); - �۾��� ���ؼ��� �Լ��� ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Math.h"




int main()
{
	int num1 = 1;
	int num2 = 2;

	Add(num1, num2); // statement (���'��') Add �Լ��� num1, num2�� ���ڷμ� �����϶�
	Add(3, 5);       // Add �Լ��� 3-> num1 , 5-> num2 Add �Լ��� �����϶�
	MinusFunc(5, 3);
	Multiply(3, 5);
	Divide(6, 3);

	// �÷��̾ �� ���� ���� ���� �ش� �ϴ� ���ڸ� ����ϰ� �ʹ�.
	int playerchoice =SelectPlayerBehavior(); // 1. ���� 2. ���� 3. ��
	printf("�÷��̾��� ���� �� : %d\n", playerchoice);
	//ĳ������ �ʱ� ���� ����
	SelectCharacter(10);

	return 0;  // ���ӿ��� ������ �������� . return�ϵ��� ����� �� . � ���ڸ� �Է��ϸ� ���α׷��� �����ϰ� ���鶧
}

//ĳ���͸� �����ؼ� ������ �����Ѵٴ��� �ϴ� �Լ�
// Dice_ STR, DEX, INT, LUK �й�

/*
* ��ȯ���� void �Լ��� �� ����ұ�?
* ��ȯ���� ������ �ڵ带 ������ �� �ִ°�? _ �ּ��� ������ �����ϸ�                                  -Value vs Reference  
* �Լ� �ȿ����� �ڵ尡 ������ �ǰ� �����δ� ������ �ȵǴ� ����� �ʿ��ϴ�. (ex) UI ���� ������ �����ִ� ����� ������ ����� ������ �����Ű��?
* 
*/

// ���� ����Ʈ�� �й��ؼ� STR,DEX,INT,LUK �� ����� �ǵ��� ��������
// startPoint ���� �Ѵ� ���� �����ؼ��� �ȵ˴ϴ�
// �й��� ������ main������ ���ɷ��� ��� �ؾ��ұ�?
void SelectCharacter(int startPoint)
{
	printf("%d ��������Ʈ�� �й����ּ���\n");
	printf("STR : 0 DEX : 1 INT : 2 LUK : 3 \n");
	int selectNumber = 0;
	int remainPoint;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	scanf("%d", &selectNumber);
	if (selectNumber == 0)
	{
		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		STR = STR + spendPoint;

	}
	else if (selectNumber == 1)
	{
		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		DEX = DEX + spendPoint;

	}
	// remainPoint < spendPoint �� ��츦 ��� Ż���� ���ΰ�?
	// � Ÿ�ֿ̹� return�� �ϰ� �Ʒ� �ڵ带 ������ ���ΰ�? ���ǹ����� ����
}


int SelectPlayerBehavior()
{
	int num = 0;
	scanf("%d", &num);

	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 2;
	}
	else if (num == 3)
	{
		return 3;
	}
	
}