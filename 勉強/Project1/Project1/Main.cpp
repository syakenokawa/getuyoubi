#include "20260831_Prac1_umi.h"

int main()
{
    
    // Aliceさん、初期残高5000円
    BankAccount account("Alice", 5000.0);

    // 最初の口座情報を表示
    account.displayAccountInfo();

    // 1000円預ける
    account.deposit(1000.0);

    // 2000円引き出す
    account.withdraw(2000.0);

    // 5000円引き出す
    // 残高不足なので失敗する
    account.withdraw(5000.0);

    // 最後の口座情報を表示
    account.displayAccountInfo();

    return 0;
}