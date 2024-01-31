//
// Created by Annie on 18.1.2024 г..
//

#ifndef BANKSYSTEM_CHEKINGACCOUNT_H
#define BANKSYSTEM_CHEKINGACCOUNT_H
#include "Account.h"
#include "SavingsAcount.h"

using namespace std;

class CheckingAccount : public Acount {

public:

    CheckingAccount(string, double, double);

    void virtual calculateFee();

    void getAccountType();

    double getFee() const;

    void setFee(double fee);

private:

    double fee;
};

#endif //BANKSYSTEM_CHEKINGACCOUNT_H
