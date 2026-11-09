#pragma once
#include"Player.h"
#include "Enemy.h"

class Game
{
private:
	Player player;
	Enemy enemy;

	/// </summary>
	void ShowStatus(const Player& player, const Enemy& enemy) const;
	void ProcessPlayerAction(PlayerAction playerAction, EnemyAction enemyAction);
	void ProcessEnemyAction(EnemyAction enemyAction, PlayerAction playerAction);
	void CheckResult() const;

public:
	void Run();

};

