//
// Created by Annie on 18.1.2024 г..
//

#ifndef BANKSYSTEM_SAVINGSACOUNT_H
#define BANKSYSTEM_SAVINGSACOUNT_H
#include "Account.h"

class SavingsAcount : public Acount {

public:

    SavingsAcount(string, double, double);

    double virtual calculateInterest();

    void getAccountType();

    double getInterest() const;

    void setInterest(double interest);

private:

    double interest;

};

#endif //BANKSYSTEM_SAVINGSACOUNT_H
