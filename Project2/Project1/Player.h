#pragma once
class Player: public Character
{
public:
	Player(std::string name);
	void Attack() override;


};

