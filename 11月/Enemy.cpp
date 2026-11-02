#include "Enemy.h"
#include "Config.h"
#include <iostream>
using namespace std;

Enemy::Enemy() : Character(Config::INITIAL_HP)
{
}

EnemyAction Enemy::DecideAction() const
{
    return EnemyAction::Attack;
}