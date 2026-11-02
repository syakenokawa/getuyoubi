#include "Player.h"
#include <iostream>
#include <limits>
using namespace std;

Player::Player() : Character(Config::INITIAL_HP)
{
}

PlayerAction Player::SelectAction() const
{
    int playerInput;

    while (true)
    {
        cout << "=========== Select Action ===========" << endl;
        cout << Config::PLAYER_ATTACK_INPUT << ": 攻撃" << endl;
        cout << Config::PLAYER_DEFENSE_INPUT << ": 防御" << endl;
        cout << Config::PLAYER_HEAL_INPUT << ": 回復" << endl;

        cin >> playerInput;

        if (playerInput == Config::PLAYER_ATTACK_INPUT)
        {
            return PlayerAction::Attack;
        }
        else if (playerInput == Config::PLAYER_DEFENSE_INPUT)
        {
            return PlayerAction::Defense;
        }
        else if (playerInput == Config::PLAYER_HEAL_INPUT)
        {
            return PlayerAction::Heal;
        }
        else
        {
            cout << "1～3を入力してください" << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}



