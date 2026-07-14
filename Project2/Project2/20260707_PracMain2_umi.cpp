#include <iostream>
#include <ctime>
#include <cstdlib>
#include "20260707_Header2_umi.h"

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int player[3];
    int cpu[3];
    int playerGuess[3];
    int cpuGuess[3];

    cout << "プレイヤーの数字を入力してください。" << endl;
    InputNumber(player);

    CpuNumber(cpu);

    while (true)
    {
        // プレイヤーのターン
        cout << "\nプレイヤーの予想" << endl;
        InputNumber(playerGuess);

        int playerHit = Judge(playerGuess, cpu);

        if (playerHit == 3)
        {
            cout << "プレイヤーの勝利！" << endl;
            break;
        }

        // CPUのターン
        cout << "\nCPUの予想" << endl;
        CpuNumber(cpuGuess);

        int cpuHit = Judge(cpuGuess, player);

        if (cpuHit == 3)
        {
            cout << "CPUの勝利！" << endl;
            break;
        }
    }

    return 0;
}