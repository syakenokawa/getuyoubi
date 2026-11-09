#include "Player.h"
#include <iostream>
#include <limits>
using namespace std;



//コンストラクタ
Player::Player(const string& name) : Character(Config::INTIAL_HP), Name(name) {}

//プレイヤーの行動を選択する

PlayerAction Player::SelectAction() const
{
	//入力
	int playerInput;

	while (true)
	{
		cout << "=======Select Action=======" << endl;
		cout << Config::PLAYER_ATTACK_INPUT << ":攻撃" << endl;
		cout << Config::PLAYER_DEFENSE_INPUT << ":防御" << endl;
		cout << Config::PLAYER_HEAL_INPUT << ":回復" << endl;

		cin >> playerInput;

		if (playerInput == Config::PLAYER_ATTACK_INPUT)
		{
			return PlayerAction::Attack;
		}
		if (playerInput == Config::PLAYER_DEFENSE_INPUT)
		{
			return PlayerAction::Defense;
		}
		if (playerInput == Config::PLAYER_HEAL_INPUT)
		{
			return PlayerAction::Heal;
		}
		cout << "入力が正しくありません。再度入力してください。" << endl;
		cin.clear();

	}

}

void Player::Heal(int amount)
{
	RecoverHp(amount);
}

std::string Player::GetName() const
{
	return Name;
}
