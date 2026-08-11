#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int board[9];
    int dice1, dice2;
    int choice;
    int number;
    bool turnFlag = true;
    bool canTake;

    srand((unsigned int)time(NULL));

    // 盤面を0にする
    for (int i = 0; i < 9; i++)
    {
        board[i] = 0;
    }

    while (true)
    {
        // 盤面表示
        cout << endl;
        cout << "盤面：" << endl;

        for (int i = 0; i < 9; i++)
        {
            if (board[i] == 0)
            {
                cout << i + 1 << " ";
            }
            else if (board[i] == 1)
            {
                cout << "P ";
            }
            else
            {
                cout << "C ";
            }
        }

        cout << endl;

        // player
        if (turnFlag)
        {
            cout << "playerのターン" << endl;

            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;

            cout << "サイコロ1：" << dice1 << endl;
            cout << "サイコロ2：" << dice2 << endl;
            cout << "合計：" << dice1 + dice2 << endl;

            canTake = false;

            if (board[dice1 - 1] == 0)
            {
                canTake = true;
            }

            if (board[dice2 - 1] == 0)
            {
                canTake = true;
            }

            if (dice1 + dice2 <= 9 &&
                board[dice1 + dice2 - 1] == 0)
            {
                canTake = true;
            }

            if (canTake == false)
            {
                cout << "playerは取れるマスがありません。" << endl;
                cout << "CPUの勝ち！" << endl;
                break;
            }

            cout << "どれを取りますか？" << endl;
            cout << "1：" << dice1 << endl;
            cout << "2：" << dice2 << endl;
            cout << "3：" << dice1 + dice2 << endl;
            cout << "選択：";
            cin >> choice;

            if (choice == 1)
            {
                number = dice1;
            }
            else if (choice == 2)
            {
                number = dice2;
            }
            else if (choice == 3)
            {
                number = dice1 + dice2;
            }
            else
            {
                cout << "正しく入力してください。" << endl;
                continue;
            }

            if (number < 1 || number > 9)
            {
                cout << "その数字は取れません。" << endl;
                continue;
            }

            if (board[number - 1] != 0)
            {
                cout << "そのマスは取られています。" << endl;
                continue;
            }

            board[number - 1] = 1;

            cout << "playerは"
                << number
                << "を取りました。" << endl;

            turnFlag = false;
        }

        // CPU
        else
        {
            cout << "CPUのターン" << endl;

            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;

            cout << "サイコロ1：" << dice1 << endl;
            cout << "サイコロ2：" << dice2 << endl;
            cout << "合計：" << dice1 + dice2 << endl;

            canTake = false;

            if (board[dice1 - 1] == 0)
            {
                canTake = true;
            }

            if (board[dice2 - 1] == 0)
            {
                canTake = true;
            }

            if (dice1 + dice2 <= 9 &&
                board[dice1 + dice2 - 1] == 0)
            {
                canTake = true;
            }

            if (canTake == false)
            {
                cout << "CPUは取れるマスがありません。" << endl;
                cout << "PLAYERの勝ち！" << endl;
                break;
            }

            if (board[dice1 - 1] == 0)
            {
                number = dice1;
            }
            else if (board[dice2 - 1] == 0)
            {
                number = dice2;
            }
            else
            {
                number = dice1 + dice2;
            }

            board[number - 1] = 2;

            cout << "CPUは"
                << number
                << "を取りました。" << endl;

            turnFlag = true;
        }
    }

    return 0;
}












































