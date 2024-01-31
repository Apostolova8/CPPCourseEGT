//
// Created by Annie on 18.1.2024 г..
//
#include "Account.h"
#include <iostream>

using namespace std;

double Acount::calculateInterest()
{
}

void Acount::calculateFee()
{
}

Acount::Acount(string name, double balance)
{
    this->name = name;
    this->balance = balance;
}

void Acount::setBalance(double balance)
{
    this->balance = balance;
}

double Acount::getBalance()
{
    return this->balance;
}

void Acount::setName(string) {
    this->name=name;
}

string Acount::getName() {
    return this->name;
}


