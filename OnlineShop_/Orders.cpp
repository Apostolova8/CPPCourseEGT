//
// Created by Annie on 22.1.2024 г..

#include "Orders.h"

unsigned Order::orderNumberTotal = 0;

Order::Order(Drinks* drink, unsigned quantity):orderNumber(++orderNumberTotal)
{
    orderList.push_back({drink, quantity });
}

void Order::addToOrder(Drinks* drink, unsigned quantity)
{
    orderList.push_back({ drink, quantity });
}

void Order::print()
{
    vector < pair<Drinks*, unsigned>>::iterator ptr = orderList.begin();
    cout << endl << "Order number: " << this->orderNumber << endl;

    do {
        ptr->first->print();
        cout << "Quantity: " << ptr->second << endl;
    } while (++ptr != orderList.end());
}

double Order::getTotalPrice()
{
    std::vector < std::pair<Drinks*, unsigned>>::iterator ptr = orderList.begin();
    double sum = 0;
    do {
        //std::cout << ptr->first->calculatePrice() * ptr->second << std::endl;
        sum += ptr->first->calculatePrice() * ptr->second;
    } while (++ptr != orderList.end());

    return sum;
}
vector<pair<Drinks*, unsigned>> Order::getBeverageList()
{
    return this->orderList;
}



