#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Person.h"
using namespace std;

struct Monster
{
	int id;
	int hp;
	char* name;
};

int main()
{
	Monster mon;
	mon.name = new char[100];
	mon.id = 1;
	mon.hp = 10;
	strcpy(mon.name, "오크");
	cout << mon.name << endl;

	Monster mon2;
	mon2 = mon;
	delete[] mon.name;

	// 얕은 복사 , 깊은 복사

	Person p1;
	Person p2(26, "임유진", "부산");
	p1.ToString();
	p2.ToString();

	Person p3(150000, 26, "유진", "부산");
	p3.ToString();

	Person p4(500, 27, "유진", "서울", "고향이부산");
	
	// 직접 클래스를 동적할당

	Person* p_ptr = new Person()

}