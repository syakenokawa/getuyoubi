#include "Game.h"
#include "PlayerAction.h"
#include "Config.h"
#include "Damaege.h"
#include <iostream>
using namespace std;

Game::Game()
{
}

void Game::Run()
{
    cout << "===== コマンドバトル開始 =====" << endl;

    while (player.GetHp() > 0 && enemy.GetHp() > 0)
    {
        player.ShowStatus("プレイヤー");
        enemy.ShowStatus("敵");

        // プレイヤーの行動を選択
        PlayerAction action = player.SelectAction();

        // プレイヤーの攻撃
        if (action == PlayerAction::Attack)
        {
            cout << "プレイヤーの攻撃！" << endl;

            enemy.TakeDamage(Config::PLAYER_ATTACK_DAMAGE);

            cout << "敵は防御した！" << endl;
        }
        // プレイヤーの防御
        else if (action == PlayerAction::Defense)
        {
            cout << "プレイヤーは防御した！" << endl;
            cout << "敵の攻撃！" << endl;

            player.TakeDamage(Config::PLAYER_DEFENSE_DAMAGE);
        }
        // プレイヤーの回復
        else if (action == PlayerAction::Heal)
        {
            cout << "プレイヤーは回復した！" << endl;

            player.RecoverHp(Config::PLAYER_HEAL_AMOUNT);

            cout << "敵の攻撃！" << endl;

            player.TakeDamage(Config::ENEMY_ATTACK_DAMAGE);
        }
    }

    cout << "===== ゲーム終了 =====" << endl;

    player.ShowStatus("プレイヤー");
    enemy.ShowStatus("敵");

    if (player.GetHp() <= 0)
    {
        cout << "プレイヤーの負け！" << endl;
    }
    else
    {
        cout << "プレイヤーの勝ち！" << endl;
    }
}