#pragma once
#include"Character.h"
#include"EnemyAction.h"
#include<string>
class Enemy :public Character
{
private:
	std::string Name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Enemy(const std::string& name);

	/// <summary>
	/// 敵の行動を決定
	/// </summary>
	/// <returns>行動選択</returns>
	EnemyAction DecideAction() const;

	std::string GetName() const { return Name; }
};








