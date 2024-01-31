//
// Created by Annie on 23.1.2024 г..
//

#ifndef ONLINESHOP_FOODS_H
#define ONLINESHOP_FOODS_H

#include <iostream>
#include <string>
#include <vector>
#include "Drinks.h"

using namespace std;

class Foods {
public:

    Foods(string, double, int);

    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    int getQuantity() const;

    void setQuantity(int quantity);

private:
    string Name;
    double Price;
    int Quantity;
    vector<Drinks> DrinksList;
    vector<Foods> FoodsList;

};


#endif //ONLINESHOP_FOODS_H
