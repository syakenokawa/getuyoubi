#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_umi.h"

using namespace std;

// CPUの数字を作る（重複なし）
void CpuNumber(int cpu[])
{
    for (int i = 0; i < 3; i++)
    {
        bool same;

        do
        {
            same = false;
            cpu[i] = rand() % 10;

            for (int j = 0; j < i; j++)
            {
                if (cpu[i] == cpu[j])
                {
                    same = true;
                }
            }

        } while (same);
    }
}

// プレイヤー入力（重複なし）
void InputNumber(int player[])
{
    cout << "0～9の数字を3つ入力してください（重複なし）" << endl;

    for (int i = 0; i < 3; i++)
    {
        while (true)
        {
            cin >> player[i];

            if (player[i] < 0 || player[i] > 9)
            {
                cout << "0～9を入力してください。" << endl;
                continue;
            }

            bool same = false;

            for (int j = 0; j < i; j++)
            {
                if (player[i] == player[j])
                {
                    same = true;
                }
            }

            if (same)
            {
                cout << "同じ数字は入力できません。" << endl;
            }
            else
            {
                break;
            }
        }
    }
}

// Hit判定
int Judge(int player[], int cpu[])
{
    int hit = 0;

    for (int i = 0; i < 3; i++)
    {
        if (player[i] == cpu[i])
        {
            cout << "Hit" << endl;
            hit++;
        }
        else
        {
            cout << "Miss" << endl;
        }
    }

    return hit;
}