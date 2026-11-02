#include "Damege.h"
#include"Config.h"

namespace Damege
{

	void ApplyDamage(int& targetHp, int damage)
		targetHp -= damage;

	if (action == Config::PLAYER_ATTACK_INPUT)
	{
		cout << "プレイヤーの攻撃！" << endl;

		Damage::ApplyDamage(enemyHP, Config::PLAYER_ATTACK_DAMAGE);
	}




}