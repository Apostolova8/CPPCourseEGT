//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_ORDERS_H
#define ONLINESHOP_ORDERS_H

#include <iostream>
#include <vector>
#include <string>
#include "AlcoholicDrinks.h"
#include <iterator>
#include "NoAlcoholicDrinks.h"
#include "Drinks.h"

class Order
{

public:

    Order(Drinks*, unsigned);
    void addToOrder(Drinks*, unsigned);
    void printOrderInfo();
    double getTotalPrice();
    vector<pair<Drinks*, unsigned>> getBeverageList();

    void print();

private:

    static unsigned orderNumberTotal;
    const unsigned orderNumber;
    vector <pair<Drinks*, unsigned>> orderList;
};


#endif //ONLINESHOP_ORDERS_H
