#include<iostream>
#include<memory>
#include"Enemy_tasku.h"

void ShowEnemy(const Enemy_task& enemy)
{
	std::cout << "関数内のEnemyを表示する" << endl;
	enemy.Draw();
}

int main(void)
{
	//unique_ptrでEnemyを生成
	std::unique_ptr<Enemy_task> enemy = std::make_unique<Enemy_task>("スライム");

	std::cout << "生成した敵は" << std::endl;

	enemy->Draw();

	ShowEnemy(*enemy);

	std::cout << "関数を呼び出した後" << std::endl;
	enemy->Draw();

	return 0;
