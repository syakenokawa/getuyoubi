#include <iostream>
using namespace std;

class Character
{
public:
    virtual void Attack()
    {
        cout << "キャラクターが攻撃！" << endl;
    }
};

class Player : public Character
{
public:
    // ここにAttack()を定義する
    cout << "playerが攻撃" << endl;
};

class Enemy : public Character
{
public:
    // ここにAttack()を定義する
    cout<<""
};

int main()
{
    Character* character;

    Player player;
    Enemy enemy;

    character = &player;
    character->Attack();

    character = &enemy;
    character->Attack();

    return 0;
}








