#pragma once

#include <string>
#include <iostream>


class DnF_Monster
{
private:
	std:: string name;
	long long hp;
	int lineHp;

	void CalculateLineHP()
	{
		lineHp = hp / 25;
	}
public:



	void ShowHpInfo()
	{
		std::cout << hp << "/" << lineHp << std::endl;
	}
};
