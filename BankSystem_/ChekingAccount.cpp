//
// Created by Annie on 18.1.2024 г..
//
#include "ChekingAccount.h"
#include "SavingsAcount.h"
#include "Account.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(string name, double balance, double fee) : Acount (name, balance)
{
    this->fee = fee;
}

void CheckingAccount::calculateFee()
{
    cout << "Enter amount to withdraw: " << " " << "BGN" << endl;
    int debit;
    cin >> debit;
    double a;
    a = getFee() * debit; //I charge a tax only for withdrawed money, not for the whole balance
    cout << "Fee is: " << a << "BGN" << endl;
    cout << "Balance after withdraw is: " << getBalance() - debit - a << "BGN" << endl;
}

void CheckingAccount::getAccountType()
{
    cout << "This account is Chekings Account." << endl;
}

double CheckingAccount::getFee() const {
    return fee;
}

void CheckingAccount::setFee(double fee) {
    CheckingAccount::fee = fee;
}




