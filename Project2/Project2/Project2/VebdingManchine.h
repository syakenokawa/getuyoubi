#pragma once
class VebdingManchine
{
private:
	int money;
	int colaStock;

public:
	VebdingManchine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney() const;
	int getColaStock() const;
};

