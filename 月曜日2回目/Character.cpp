#include "Character.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>
using namespace std;

Charater::Charater()
{
	hp = Config::MAX_HP;

	attck = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense = rand() % (Config::MAX_STATUS - Config::MIN_STAUS + 1) + Config::MIN_STATUS;
	evasion = rand() % (Config::MAX_STAUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;


}
void Character::ShowStatus()
{
	cout << "HP" << hp << endl;
	cout << "UŒ‚—Í" << attck << endl;
	cout << "–hŒä—Í" << evasion << endl;
	cout << "‰ñ”ð—Í" << defense<< endl;
 
}
void Character::Attack(Character&target)




























