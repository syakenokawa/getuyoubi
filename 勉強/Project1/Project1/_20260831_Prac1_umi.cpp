#include "_20260831_Prac1_umi.h"
BankAccount::BankAccount(const string& holder, double initialBalance)
: accountHolder(holder), balance(initialBalance)
{
}

// 現在の残高を取得する
double BankAccount::getBalance() const
{
    return balance;
}


void BankAccount::deposit(double amount)
{
    // 預ける金額が0より大きいか確認する
    if (amount > 0)
    {
        // 残高に金額を追加する
        balance += amount;

        cout << "Deposited: " << amount << "\n";
    }
    else
    {
        // 0以下ならエラー
        cout << "Invalid deposit amount.\n";
    }
}

// お金を引き出す
void BankAccount::withdraw(double amount)
{
    
    if (amount > 0 && amount <= balance)
    {
        // 残高から金額を引く
        balance -= amount;

        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        // 残高不足などの場合
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

// 口座情報を表示する
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}