#pragma once
#include<string>
using namespace std;
class Character
{
private:
	int hp;
protected:

	void RecoverHp(int amount);
public:
	Character(int initialHp);

	void ShowStatus(const std::string& name) const;

	void TakeDamage(int damage);
	int GetHp() const;


};



