#include "Damege.h"
#include"Config.h"

namespace Damage
{
	int CalculatePlayerDamage(bool enemyDefending)
	{
		if (enemyDefending)
		{
			return Config::PLAYER_ATTACK_REDUCED_DAMAGE;
		}

		return Config::PLAYER_ATTACK_DAMAGE;

	}

	int CalculateEnemyDamage(bool playerDefending)
	{
		if (playerDefending)
		{
			return Config::ENEMY_ATTACK_REDUCED_DAMAGE
		}

		return Config::ENEMY_ATTACK_DAMAGE;
	}

}