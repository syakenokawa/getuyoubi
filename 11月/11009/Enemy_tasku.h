#pragma once
#include<string>
using namespace std;
class Enemy_task
{

private:
	string Name;
	int hp;
public:
	
	Enemy_task(const string& name);
	
	~Enemy_task();


	int GetHp()const;


	void Draw()const;





};












