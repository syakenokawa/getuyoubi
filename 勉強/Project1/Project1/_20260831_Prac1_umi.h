#pragma once
class _20260831_Prac1_umi
#include <iostream>
#include <string>

    using namespace std;

    // 銀行口座を表すクラス
    class BankAccount
    {
    private:
        // 口座名義人
        string accountHolder;

        // 残高
        double balance;

    public:
        // コンストラクタ
        BankAccount(const string& holder, double initialBalance);

        // 残高を取得する
        double getBalance() const;

        // お金を預ける
        void deposit(double amount);

        // お金を引き出す
        void withdraw(double amount);

        // 口座情報を表示する
        void displayAccountInfo() const;
    };




