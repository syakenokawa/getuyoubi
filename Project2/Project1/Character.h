#pragma once
#include<string>
class Character
{
private:
	std::string name;
public:
	Character(std::string name);

	std::string Getname();

	virtual void Attack();
};

