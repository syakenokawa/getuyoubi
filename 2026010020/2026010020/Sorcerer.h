#pragma once
class Sorcerer
{
protected:
	int HP;
	int cursedEnergy;
public:
	Sorcerer(int h, int c);
	
	void ShowStatus();
	virtual void UseTechnique() = 0;

};

