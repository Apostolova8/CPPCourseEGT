//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_CUSTOMERS_H
#define ONLINESHOP_CUSTOMERS_H
#include <iostream>
#include "Orders.h"

using namespace std;

class Customers {

public:

    Customers(string);

    const string &getUsername() const;

    void setUsername(const string &username);

    void print();

    void addOrder();

    const vector<Order> &getOrders() const;

    void setOrders(const vector<Order> &orders);

private:
    string username;
    vector<Order> orders;
};


#endif //ONLINESHOP_CUSTOMERS_H
