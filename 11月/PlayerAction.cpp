#include "PlayerAction.h"
#include "Config.h"
#include "Damage.h"
#include <iostream>
using namespace std;

namespace PlayerAction
{
    void Action(int& playerHP, int& enemyHP)
    {
        int action;

        cout << "行動を選んでください" << endl;
        cout << "1：攻撃" << endl;
        cout << "2：防御" << endl;
        cout << "3：回復" << endl;

        cin >> action;

        if (action == Config::PLAYER_ATTACK_INPUT)
        {
            cout << "プレイヤーの攻撃！" << endl;

            Damage::ApplyDamage(
                enemyHP,
                Config::PLAYER_ATTACK_DAMAGE
            );
        }
        else if (action == Config::PLAYER_DEFENSE_INPUT)
        {
            cout << "プレイヤーは防御した！" << endl;
        }
        else if (action == Config::PLAYER_HEAL_INPUT)
        {
            cout << "プレイヤーは回復した！" << endl;

            playerHP += Config::PLAYER_HEAL_AMOUNT;

            if (playerHP > Config::MAX_HP)
            {
                playerHP = Config::MAX_HP;
            }
        }
    }
}