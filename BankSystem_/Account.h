//
// Created by Annie on 18.1.2024 г..
//

#ifndef BANKSYSTEM_ACCOUNT_H
#define BANKSYSTEM_ACCOUNT_H
#include <string>
#include <vector>

using namespace std;

class Acount {

public:

    double calculateInterest();

    void  virtual calculateFee();

    Acount(string, double);

    void setBalance(double);

    double getBalance();

    void setName(string);

    string getName();

private:

    string name;
    double balance;
};
#endif //BANKSYSTEM_ACCOUNT_H
