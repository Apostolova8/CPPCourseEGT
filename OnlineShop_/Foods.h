//
// Created by Annie on 23.1.2024 г..
//

#ifndef ONLINESHOP_FOODS_H
#define ONLINESHOP_FOODS_H

#include <iostream>

using namespace std;

//namespace Foods {
    class Food {

    public:
        Food (string, string, double, int);

        double calculatePrice() const;

        void print() const;

        const string &getName() const;

        void setName(const string &name);

        double getPrice() const;

        void setPrice(double price);

        int getQuantity() const;

        void setQuantity(int quantity);

        const string &getType() const;

        void setType(const string &type);

    private:
        string name;
        string type;
        double price;
        int quantity;
    };
//}




#endif //ONLINESHOP_FOODS_H
