//
// Created by Annie on 18.1.2024 г..
//
#include "SavingsAcount.h"
#include <iostream>
#include "Account.h"
#include <cmath>

using namespace std;

SavingsAcount::SavingsAcount(string name, double balance, double interest) : Acount (name, balance) {
    setInterest(interest);
}

double SavingsAcount::calculateInterest() {
    cout << "Enter amount to deposit: " << " " << "BGN" << endl;
    int credit;
    cin >> credit;
    double a;
    a = getInterest() * credit; //I charge a tax only for deposited money, not for the whole balance
    cout << "Fee is: " << a << "BGN" << endl;
    cout << "Balance after deposit is: " << getBalance() + credit - a << "BGN" << endl;
    return 0;
}

void SavingsAcount::getAccountType()
{
    cout << "This account is Savings account. " << endl;
}

double SavingsAcount::getInterest() const {
    return interest;
}

void SavingsAcount::setInterest(double interest) {
    SavingsAcount::interest = interest;
}


