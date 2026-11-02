#include<iostream>
using namespace std;

namespace player
{
	void showStatus()
	{
		cout << "プレイヤー名前:ハロ" << endl;
	  
	}
}

namespace enemy
{
	void showStatus()
	{
		cout << "敵の名前:ハロ２" << endl;
	}

}
int main(void)
{
	player::showStatus();
	enemy::showStatus();
	return 0; 
}








