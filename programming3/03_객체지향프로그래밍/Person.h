#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

// 생성자 : 객체의 데이터(속성)을 초기화 하기 위한 함수 - 문법

class Person
{
private:

	int money;
	int age;
	std::string name;
	std::string home;
	char* symbol;

public:
	// 생성자
	Person() = default; // 복제 생성자, 이동 생성자 
	Person(int _age, std::string _name, std::string _home) : age(_age), name(_name), home(_home), money(10000) {}
	Person(int _money, int _age, std::string _name, std::string _home) : money(_money), age(_age), name(_name), home(_home) {}
	Person(int _money, int _age, std::string _name, std::string _home, const char* _symbol) : money(_money), age(_age), name(_name), home(_home)  
	{
		symbol = new char[100];
		strcpy(symbol, _symbol);
	}
	// 소멸자
	~Person()
	{
		std::cout << "소멸자 호출" << std::endl;
		delete[] symbol;
	}
	void ToString()
	{
		std::cout << "소지금 : " << money << std::endl;
		std::cout << "이름 : " << name << std::endl;
		std::cout << "나이 : " << age << std::endl;
		std::cout << "거주지 : " << home << std::endl;
	
	}
};