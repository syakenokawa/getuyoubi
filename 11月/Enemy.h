#pragma once
#include"Character.h"
#include"EnemyAction.h"

class Enemy :public Character
{
public:

	Enemy();
	EnemyAction DecideAction() const;

};










