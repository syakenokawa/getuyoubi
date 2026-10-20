#include "Sorcerer.h"
#include<iostream>

using namespace std;

Sorcerer::Sorcerer(int h, int c)
	: HP(h), cursedEnergy(c)
{
}


void Sorcerer::ShowStatus()
{
	cout << "HP:" << HP << endl;
	cout << "呪力:" << cursedEnergy << endl;
}





