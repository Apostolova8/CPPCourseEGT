//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_DRINKS_H
#define ONLINESHOP_DRINKS_H

#include <iostream>
#include <string>

using namespace std;

//namespace Drinks {
    class Drinks {

    public:

        Drinks(string, string, double, int);

        const string &getType() const;

        void setType(const string &type);

        const string &getName() const;

        void setName(const string &name);

        double getPrice() const;

        void setPrice(double price);

        int getQuantity() const;

        void setQuantity(int quantity);

        virtual void print();

        virtual double calculatePrice();

    private:
        string name;
        string type;
        double price;
        int quantity;
    };
//}

#endif //ONLINESHOP_DRINKS_H
