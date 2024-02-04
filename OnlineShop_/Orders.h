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
#include "Customers.h"
#include "Foods.h"

namespace Orders {
    class Order {

    public:
        void displayDrinkSales(const vector<Order>& orders);

        //Customers::Customer findBestCustomer(const vector<Customers::Customer>& customers);

        //vector<Customers::Customer> customersWithSpecificDrink(const vector<Customers::Customer>& customers, const string& drinkType);

        //vector<Customers::Customer> topCustomersWithAmount(const vector<Customers::Customer>& customers, const string& drinkType, double amount);

        //vector<Drinks::Drinks*> drinksList;

    private:
        string date;
        double finalAmount;
    };



}

#endif //ONLINESHOP_ORDERS_H
