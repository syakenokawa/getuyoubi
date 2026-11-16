#include "Enemy.h"
Enemy::Enemy(const std::string& name) :name(name), hp(100)
{
	std::cout << name << "‚ªoŒ»‚µ‚½\n";
  
}
Enemy::~Enemy()
{
	std::cout << name << "‚Í”j‰ó‚³‚ê‚Ü‚µ‚½B\n";

}
void Enemy::Draw() const
{
	std:: cout << "–¼‘O;" << name << "\n";
	std::cout << "HP:" << hp << "\n";



}










