#include "Character.h"
#include "Config.h"
#include <iostream>
using namespace std;

Character::Character(int initialHp) : hp(initialHp)
{
}

void Character::ShowStatus(const string& name) const
{
    cout << name << " HP:" << hp << endl;
}

void Character::TakeDamage(int damage)
{
    hp -= damage;

    if (hp < 0)
    {
        hp = 0;
    }
}

void Character::RecoverHp(int amount)
{
    hp += amount;

    if (hp > Config::MAX_HP)
    {
        hp = Config::MAX_HP;
    }
}






