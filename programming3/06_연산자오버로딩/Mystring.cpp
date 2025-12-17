#include "Mystring.h"

// delegate 생성자 

Mystring::Mystring() : str(nullptr)
{
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char* source)
{
	str = new char[std::strlen(source)+ 1]; // source의 길이 만큼 char 길이를 메모리에 저장하고 싶다.
	strcpy(str, source);  // source 데이터를 str 복제
}

Mystring::Mystring(const Mystring& other) : str(nullptr)
{
	str = new char[std::strlen(other.str) + 1];
	strcpy(str, other.str);


}

Mystring::Mystring(Mystring&& rhs) noexcept : str(nullptr)
{
	str = rhs.str;
	rhs.str = nullptr;
}

Mystring::~Mystring()
{
	delete[] str;
}

Mystring Mystring::operator=(const Mystring& other)
{
	if (this == &other)
		return *this;

	delete[] str;
	str = new char[std::strlen(other.str) + 1];
	std::strcpy(str, other.str);

	return Mystring();
}

Mystring Mystring::CopyAssignment(const Mystring& other)
{
	if (this == &other)
		return *this;

	delete[] str;
	str = new char[std::strlen(other.str) + 1];
	std::strcpy(str, other.str);

	return Mystring();
}
