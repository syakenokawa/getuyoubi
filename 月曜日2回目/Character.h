#pragma once
class Character
{
protected:
	int hp;
	int attck;
	int defense;
	int evasion;
public:
	//コンストラクター
	Character();
	//ステータス
	void ShowStatus();
	//攻撃
	void Attack(Character& target);
	//回復
	void Recovery();
	//生存判定
	bool IsAlive();
	//HP習得
	int GetHp();

};

