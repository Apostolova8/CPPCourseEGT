//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_DRINKS_H
#define ONLINESHOP_DRINKS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Drinks {

public:

    Drinks(string, double, int);

    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    int getQuantity() const;

    void setQuantity(int quantity);

    double getCityTax() const;

    void setCityTax(double cityTax);

    virtual void print();

    virtual double calculatePrice() = 0;

    bool operator==(Drinks const& b);

private:
    string name;
    double price;
    vector<Drinks*>drinks;
    const double tax = 1.2;

protected:
    int quantity;
};


#endif //ONLINESHOP_DRINKS_H
