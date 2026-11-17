#pragma once
#include <memory>
#include<vector>
#include "EnemyTask.h"
#include "ConfigTask.h"
//それぞれの関数名
class GameTask
{
private:
	std::vector<std::shared_ptr<EnemyTask>> enemies;

	void Init();

	void Draw()const;

	void Attack();

	bool IsGameClear() const;

public:
	//コナン君がいつも叫んでいる人
	void Run();
};















