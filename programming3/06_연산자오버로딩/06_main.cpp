#include <iostream>
#include <string>
#include "Mystring.h"

using namespace std;


int main()
{
	std::cout << "Mystring 객체 구현" << std::endl;
	Mystring s1;
	Mystring s2("Hello world");

	Mystring s3(s2); //copy

	std::cout << "Mystring 연산자를 이용한 기능 구현 (연산자 오버로딩)" << std::endl;
	Mystring s5;
	s5 = "Hello";  //  copy assignment ( =연산자 오버로딩해서 구현)

	s5 = std::move(s1);
}