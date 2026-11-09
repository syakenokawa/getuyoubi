#include "Game.h"
#include"Damage.h"
#include"Config.h"

#include<iostream>
using namespace std;

void Game::ShowStatus(const Player& player, const Enemy& enemy) const
{
	cout << "現在の状態" << endl;

	player.ShowStatus(player.GetName());
	enemy.ShowStatus(enemy.GetName());
}

void Game::ProcessPlayerAction(PlayerAction playerAction, EnemyAction enemyAction)
{
	switch (playerAction)
	{
	case PlayerAction::Attack:
		if (enemyAction == EnemyAction::Defense)
		{
			Damage::CalculatePlayerDamage(true);
		}
		else
		{
			Damage::CalculatePlayerDamage(false);
		}
		break;
	case PlayerAction::Defense:
		break;
	case PlayerAction::Heal:
		player.Heal(Config::PALYER_HEAL_AMOUNT);
		break;
	default:
		break;
	}
}

void Game::ProcessEnemyAction(EnemyAction enemyAction, PlayerAction playerAction)
{
	switch (playerAction)
	{
	case PlayerAction::Attack:
		cout << "Player'S Attack" << endl;
		if (enemyAction == EnemyAction::Defense)
		{
			Damage::CalculatePlayerDamage(true);
		}
		else
		{
			Damage::CalculatePlayerDamage(false);
		}
	case PlayerAction::Defense:
		break;
	default:
		break;
	}
}

void Game::ProcessEnemyAction(EnemyAction enemyAction, PlayerAction playerAction)
{
	switch (enemyAction)
	{
	case EnemyAction::Attack:
		if (playerAction == PlayerAction::Defense)
		{
			Damage::CalculateEnemyDamage(true);
		}
		else
		{
			Damage::CalculateEnemyDamage(false);
		}
		break;
	case EnemyAction::Defense:
		break;
	default:
		break;
	}
}

void Game::CheckResult() const
{
	if (player.GetHp() <= 0)
	{
		cout << "You Lose!" << endl;
	}
	else if (enemy.GetHp() <= 0)
	{
		cout << "You Win!" << endl;
	}
}

void Game::Run()
{
	//ゲーム開始
	cout << "ゲームスタート！" << endl;
	while (true)
	{
		ShowStatus(player, enemy);
		PlayerAction playerAction = player.SelectAction();
		EnemyAction enemyAction = enemy.DecideAction();
		ProcessPlayerAction(playerAction, enemyAction);
		ProcessEnemyAction(enemyAction, playerAction);
		CheckResult();
		if (player.GetHp() <= 0 || enemy.GetHp() <= 0)
		{
			break;
		}
	}
}