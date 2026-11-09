#include "Enemy.h"
#include "Config.h"
#include <iostream>
using namespace std;

//コンストラクタ
Enemy::Enemy(const std::string& name) : Character(Config::INTIAL_HP), Name(name) {}

EnemyAction Enemy::DecideAction() const
{
	//乱数の初期化
	static std::random_device rd;
	static std::mt19937 engine(rd());

	std::uniform_int_distribution<int> dist(Config::ENEMY_ACTION_MIN, Config::ENEMY_ACTION_MAX); // 0から2までの範囲で乱数を生成
	//0～2の乱数を生成
	int enemyChoice = dist(engine);

	if (enemyChoice == Config::ENEMY_ACTION_MIN)
	{
		return EnemyAction::Attack;
	}

	return EnemyAction::Defense;


}

std::string Enemy::GetName() const
{
	return Name;
}