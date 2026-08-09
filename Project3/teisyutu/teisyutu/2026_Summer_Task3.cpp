#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int board[9];
    int dice1, dice2;
    int choice;
    bool turnFlag = true;

    srand((unsigned int)time(NULL));

    
    for (int i = 0; i < 9; i++)
    {
        board[i] = 0;
    }
    //サイコロの戦い
    while (true)
    {
        if (turnFlag)
        {
            cout << "PLAYERのターン" << endl;

            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;

            cout << "サイコロ1" << dice1 << endl;
            cout << "サイコロ2" << dice2 << endl;
            cout << "合計" << dice1 + dice2 << endl;

            cout << "取る数字を入力(1～9)";
            cin >> choice;

            choice--;

            if (board[choice] == 0)
            {
                board[choice] = 1;
                cout << choice + 1 << "を取りました。" << endl;
                turnFlag = false;
            }
            else
            {
                cout << "その数字は取られています。" << endl;
            }
        }
        else
        {
            cout << "CPUのターン" << endl;

            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;

            cout << "サイコロ1" << dice1 << endl;
            cout << "サイコロ2" << dice2 << endl;
            cout << "合計" << dice1 + dice2 << endl;

            if (board[dice1 - 1] == 0)
            {
                board[dice1 - 1] = 2;
                cout << "CPUはを取りました。" << dice1  << endl;
            }
            else if (board[dice2 - 1] == 0)
            {
                board[dice2 - 1] = 2;
                cout << "CPUはを取りました。" << dice2 << endl;
            }
            else if (dice1 + dice2 <= 9 && board[dice1 + dice2 - 1] == 0)
            {
                board[dice1 + dice2 - 1] = 2;
                cout << "CPUはを取りました。" << dice1 + dice2  << endl;
            }
            else
            {
                cout << "CPUは取れる数字がありません。" << endl;
                break;
            }

            turnFlag = true;
        }
    }

    return 0;
}














































