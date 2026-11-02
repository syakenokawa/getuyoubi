#pragma once
#include"Character.h"
#include"player.h"
#include<limits>
#include<iostream>
Player::player() : Character(Config::INTAL_HP) {}

PlayerAction Player::SelectAction() const
{
	int playerInput;

	while (true)
	{
		cout << "===========Select Action=====" << endl;
		cout << Config::PLAYER_ATTACK_INPUT << ":UŒ‚" << endl;
		cout << Config::PLAYER_ATTACK_INPUT << ":–hŒä" << endl;
		cout << Conflig::PLAYER_ATTCK_INPU << ":‰ñ•œ" << endl;
		cin >> playerInput;

		if (playerInput == Cobfig::PLAYER_ATTACK_INPUT)
		{

		}












	}



}








