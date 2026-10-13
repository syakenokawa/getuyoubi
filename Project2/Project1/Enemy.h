#pragma once
#include "Character.h"
class Enemy :public Character
{
public:
	Enemy(std::string name);
	void Attack() override;
};
#include <iostream>
#include "Character.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("切り捨てゴメーン");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}
