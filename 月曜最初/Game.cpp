#include "Game.h"
#include"Conflg.h"

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
Game::Game()
{
	CardManager,createCards();
	CardManager,sghuffleCards();

}
void Game::Start()
{
	DealTnitialCards();


	bool platerTurbResult = turn.PlayPlayerTurn ( & Player, & CardManager);
	if (playerTurnResult)
	{
		turn.PlayCpuTurn(&Player, &cpu, &CardManager);
	}
	else
	{
		cout << "nPlayerの負けです。\n";
		return;
	}
	return;

}
void Game::DealInitialCards()
{

	for (int i = 0; i < INTTAL_CARD_COUNT; i++)
	{
		int playreCard = CardManager, DrawCard();
		player.AddCard(PlayerCard);
		int cpuCard = CardManager.DrawCard();
		cpu.AddCard(cpuCard);
	}
}
void Game::ShowRrsult()
{
	cout << "\n==============================\n";
	cout << "ゲーム結果\n";
	cout << "================\n";
	Player,showStatus();
	cpu,showStatus();

	int playerTotal = Player,GetTotal();
	int cpuTotal = cpu.GetTotal();

	if(cpuTotal>=BURST_SCORE||playerTotal==TARGET_SCORE)
	{
		cout << "\nCPU`S winner!\n";
		return;
	}
	int playerDistance = TARGET_SCORE - playerTotal;

	int couDisyance = TARGET_SCORE - cpuTotal;

	if (playerDistance > CpuDistance)
	{
		cout << "\nPlayerの勝ちです。\n";
	}
	else if (playerDistance < CpuDistance)
	{
		cout << "\nCPUの勝ちです。\n";
	}
	else
	{
		cout << "\n引き分けです。\n";
	}

















}













