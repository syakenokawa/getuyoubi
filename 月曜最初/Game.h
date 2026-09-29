#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"
#include"Turn.h"
class Game
{
private:
	CardManager catdManager;
	Player plaer;
	CPU cpu;
	Turn turn;

	void DealTnitialCards();

	void ShowResult();

public:

	Game();

	void Start();

};

