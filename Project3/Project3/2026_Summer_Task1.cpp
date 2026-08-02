#include <iostream>   
#include <cstdlib>    
#include <ctime>      
using namespace std;
 // メイン関数
int main()    
{
    // 変数
    int answer = -1;  
    int question;     
    int count = 0;    
    // ランダムな数字
    srand((unsigned int)time(nullptr));
    // 0～100のランダムな数字
    question = rand() % 101;
    cout << "数字当てゲーム" << endl;
    // 表示
    cout << "0～100までの数字を当ててください。" << endl;
    // 繰り返す
    while (question != answer)
    {
        // 挑戦回数1回
        count++;

        // 繰り返す
        while (true)
        {
            // 表示
            cout << "0～100の数字を入力してください：" << endl;

            // キーボードから数字を入力
            cin >> answer;

            // 0より小さい、または100より大きい場合
            if (answer < 0 || answer > 100)
            {
                // 入力が間違っていると表示
                cout << "入力に誤りがあります。再入力してください。" << endl;
            }
            else
            {
                
                break;
            }
        }

        // 大きい、小さいどちらか
        if (question > answer)
        {
           
            cout << "もっと大きい数字です。" << endl;
        }

        else if (question < answer)
        {
           
            cout << "もっと小さい数字です。" << endl;
        }
    }

    // 結果を表示
    cout << endl;
    cout << "おめでとうございます！正解です！" << endl;
    cout << "正解：" << answer << endl;
    cout << count << "回目で当てることができました。" << endl;

    // プログラム終了
    return 0;
}