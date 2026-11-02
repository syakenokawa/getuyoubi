#pragma once
#include<string>
using namespace std;
class Character
{
public:
	Character(int initialHp);

	void showStatus(const string& name)const;

	void TakeDamage(int damage);

	void RecoverHp(int amount);








};

