//
// Created by Annie on 22.1.2024 г..
//

#include "Customers.h"
#include "Orders.h"

const vector<Order> &Customers::getOrders() const {
    return orders;
}

void Customers::setOrders(const vector<Order> &orders) {
    this->orders = orders;
}

Customers::Customers(string) {

}

const string &Customers::getUsername() const {
    return this->username;
}

void Customers::setUsername(const string &username) {

}

void Customers::print() {

}

void Customers::addOrder() {

}
