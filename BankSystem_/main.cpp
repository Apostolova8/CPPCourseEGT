#include <iostream>
#include "Account.h"
#include "ChekingAccount.h"
#include "SavingsAcount.h"

using namespace std;

int main() {

    vector<Acount> accounts;

    SavingsAcount* savingsAcount = new SavingsAcount ("Ana Apostolova", 1500, 0.01); //name, balance, interest
    //accounts.push_back(savingsAcount);
    cout << "Account Type: ";
    savingsAcount->getAccountType();
    cout << "Owner: " << savingsAcount->getName() << endl;
    cout << "Balance is: " << savingsAcount->getBalance() << "BGN" << endl;
    savingsAcount->calculateInterest();

    cout << endl;

    CheckingAccount* checkingAccount = new CheckingAccount("Svilena Dimova", 2000.0, 0.015);
    //accounts.push_back(checkingAccount);
    cout << "Account Type: ";
    checkingAccount->getAccountType();
    cout << "Owner: " << checkingAccount->getName() << endl;
    cout << "Balance is: " << checkingAccount->getBalance() << "BGN" << endl;
    checkingAccount->calculateFee();


return 0;

}
