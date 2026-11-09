#include<iostream>
#include"Enemy.h"

int main(void)
{
	std::cout << "ゲーム開始" << std::endl;

	std::unique_ptr<Enemy>enemy = std::make_unique<Enemy>();

	enemy->Update();
	enemy->Draw();


	std::cout << "ゲーム終了\n";



	return 0;









}



















