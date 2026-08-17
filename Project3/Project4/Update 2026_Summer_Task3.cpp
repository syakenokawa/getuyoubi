#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//メイン関数
int main(void)
{
	//変数
	const int CARD = 3;
	const int CARD_NUMBER = 10;

	int i, hit = 0;
	int playerCard[CARD];
	int enemyCard[CARD];
	int plyChoice[CARD];
	int emyChoice[CARD];

	bool trunFlag = true;
	bool judgementFlag = false;

	srand((unsigned int)time(NULL));
	//3回を選ぶ
	for (i = 0; i < CARD; i++)
	{
		playerCard[i] = rand() % CARD_NUMBER;
		enemyCard[i] = rand() % CARD_NUMBER;
	}
	cout << "===================   Hit & Blow   ============================" << "\n";
	cout << "3マスの数字あてゲームプレイヤーとCPUが、お互いに隠し持った3つの数字を当てるターン制のゲーム" << "\n";
	cout << "あなたの配られてカードは," << "\n";
	//１番目
	for (i = 0; i < CARD; i++)
	{
		cout << i + 1 << "番目" << playerCard[i] << "\n";
	}

	cout << "===================   GAME STRAT   ============================" << "\n";
	//達成出来るまで
	while (true)
	{

		if (trunFlag)
		{
			//0から９えらべさせる
			hit = 0;
			cout << "PLAYER TRUN 「数字の0から9までの数字を3つ選んでください」\n";
			for (i = 0; i < CARD; i++)
			{
			//再度
				while (true)
				{
					cin >> plyChoice[i];
					if (0 > plyChoice[i] || 9 < plyChoice[i])
					{
						cout << "入力に誤りがあります。再度入力してください。\n";
					}
					else
					{
						break;
					}

				}
			}

			//当たったか、当たらないか
			for (i = 0; i < CARD; i++)
			{
				if (plyChoice[i] == enemyCard[i])
				{
					cout << "Hit,";
					hit++;
				}
				else
				{
					cout << "Blow,";
				}
			}
			cout << "\n";
			if (hit == 3)
			{
				cout << "3Hit!!\n";
				judgementFlag = true;
				break;
			}

			cout << "\n";
			trunFlag = false;
		}
		//相手
		else
		{
			hit = 0;

			cout << "ENEMY TRUN \n";
			for (i = 0; i < CARD; i++)
			{
				emyChoice[i] = rand() % CARD_NUMBER;

				cout << i + 1 << "番目" << emyChoice[i] << "\n";
			}

			for (i = 0; i < CARD; i++)
			{
				if (emyChoice[i] == playerCard[i])
				{
					cout << "Hit,";
					hit++;
				}
				else
				{
					cout << "Blow,";
				}
			}
			cout << "\n";
			if (hit == 3)
			{
				cout << "3Hit!!\n";
				break;
			}

			cout << "\n";
			trunFlag = true;
		}


	}
	//結果
	if (judgementFlag)
	{
		cout << "PLAYER WINNER\n";
	}
	else
	{
		cout << "ENEMY WINNER\n";
	}
	//終わり
	return 0;
}