#pragma once

#include "Character.h"
#include "Config.h"

class Player :public Character
{
private:
	string Name;
public:
	Player(const string& name);
	PlayerAction SelectAction() const;
	void Heal(int amount);

	std::string GetName() const { return Name; }

};

