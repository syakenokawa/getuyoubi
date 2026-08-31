#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    Calculator calc;

    double num1;
    double num2;
    int choice;
    int again = 1;

    while (again == 1)
    {
        
        cout << "1つ目の数字：";
        cin >> num1;

        cout << "2つ目の数字：";
        cin >> num2;

       
        calc.SetNumber(num1, num2);

        
        cout << endl;
        cout << "1. 加算" << endl;
        cout << "2. 減算" << endl;
        cout << "3. 乗算" << endl;
        cout << "4. 除算" << endl;
        cout << "選択：";
        cin >> choice;

        
        if (choice == 1)
        {
            cout << "答え：" << calc.add() << endl;
        }
        else if (choice == 2)
        {
            cout << "答え：" << calc.subtract() << endl;
        }
        else if (choice == 3)
        {
            cout << "答え：" << calc.multiply() << endl;
        }
        else if (choice == 4)
        {
            cout << "答え：" << calc.divide() << endl;
        }
        else
        {
            cout << "番号が間違っています" << endl;
        }

        
        cout << endl;
        cout << "計算を続けますか？" << endl;
        cout << "1. 続ける" << endl;
        cout << "2. 終了" << endl;
        cout << "選択：";
        cin >> again;

        cout << endl;
    }

    cout << "プログラムを終了します。" << endl;

    return 0;
}