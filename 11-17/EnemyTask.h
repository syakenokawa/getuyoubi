#pragma once
class EnemyTask
{
private:
	int hp;
public:
	EnemyTask();
	~EnemyTask();
	//ƒ_ƒ[ƒW
	void Damage(int damage);
	//‚g‚
	int GetHp()const;
	//¶‚«‚Ä‚¢‚é‚©
	bool IsAlive() const;
};
