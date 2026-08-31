#include "VebdingManchine.h"
#include<iostream>
using namespace std;

VebdingManchine::VebdingManchine()
{
	money = 0;
	colaStock = 15;

}

void VebdingManchine::insertMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}
}

void VebdingManchine::buyCola()
{
	const int price = 180;
	if (money >= price && colaStock > 0)
	{
		money -= price;

		colaStock--;
		cout << "コカ・コーラを購入しました。\n";
	}
	else 
	{
		cout << "購入できませんでした。/n";
	}


}
int VebdingManchine::getMoney()
const 
{
	return money;
}
int VebdingManchine::getColaStock()
const 
{
	return colaStock;
}





