#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//メイン
int main()
{
    //それぞれの関数
    int player;
    int cpu;
    int result;
    int i;
    int win = 0;
    int lose = 0;
    int draw = 0;

    srand((unsigned int)time(nullptr));
    //表示
    cout << "じゃんけんゲームを開始します。" << endl;
    //5回繰り返し
    for (i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "-------- " << i + 1 << "回戦 --------" << endl;
        //繰り返す
        while (true)
        {
            cout << "0：グー　1：チョキ　2：パー" << endl;
            cout << "プレイヤーの手を入力してください：" << endl;
            // キーボードから数字を入力
            cin >> player;
            // 0より小さい、または２より大きい場合
            if (player >= 0 && player <= 2)
            {
                break;
            }

            cout << "入力に誤りがあります。再入力してください。" << endl;
        }

        cpu = rand() % 3;
        //だすもの
        switch (player)
        {
        case 0:
            cout << "PLAYER：グー" << endl;
            break;

        case 1:
            cout << "PLAYER：チョキ" << endl;
            break;

        case 2:
            cout << "PLAYER：パー" << endl;
            break;
        }

        //それぞれの選択
        switch (cpu)
        {
        case 0:
            cout << "CPU：グー" << endl;
            break;

        case 1:
            cout << "CPU：チョキ" << endl;
            break;

        case 2:
            cout << "CPU：パー" << endl;
            break;
        }

        //それぞれの結果
        result = player - cpu;

        if (result == -1 || result == 2)
        {
            cout << "PLAYER WIN!" << endl;
            win++;
        }
        else if (result == 0)
        {
            cout << "DRAW" << endl;
            draw++;
        }
        else
        {
            cout << "CPU WIN!" << endl;
            lose++;
        }
    }

    //結果
    cout << endl;
    cout << "==============================" << endl;
    cout << "5回勝負終了！" << endl;
    cout << win << "勝 "
        << draw << "分 "
        << lose << "敗" << endl;
    cout << "==============================" << endl;
    //終わり
    return 0;
}