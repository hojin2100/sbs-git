#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>

using namespace std;

class Mystring
{
private: 
	char* str;
public:
	Mystring();
	Mystring(const char* source); // 중첩 정의 생성자overload constructor
	Mystring(const Mystring& other); //복사 생성자
	Mystring(Mystring&& rhs) noexcept; // 이동 생성자
	~Mystring();

	// 연산자 오버로딩
	Mystring operator=(const Mystring& other);

	Mystring CopyAssignment(const Mystring& other);

};
