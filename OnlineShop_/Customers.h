//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_CUSTOMERS_H
#define ONLINESHOP_CUSTOMERS_H
#include <iostream>
#include "Orders.h"
#include <vector>

using namespace std;

//namespace Customers {
    class Customer {

    public:
        Customer(string& username, vector<Drinks*>& items);

        const string &getUsername() const;

        void setUsername(const string &username);

        const vector<Drinks*> &getItems() const;

        void setItems(const vector<Drinks*> &items);

        double calculateScore() const;

        void print();

    private:
        string username;
        vector<Drinks*> items;

    };
//}




#endif //ONLINESHOP_CUSTOMERS_H
