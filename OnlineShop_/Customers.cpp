//
// Created by Annie on 22.1.2024 г..
//

#include "Customers.h"

using namespace std;

//namespace Customers {
    double Customer::calculateScore() const {
        return 0.0;
    }

    const string &Customer::getUsername() const {
        return username;
    }

    void Customer::setUsername(const string &username) {
        Customer::username = username;
    }

    const vector<Drinks*> &Customer::getItems() const {
        return items;
    }

    void Customer::setItems(const vector<Drinks*> &items) {
        Customer::items = items;
    }

    void Customer::print() {
        cout << "Customer name: " << getUsername() << endl;
    }

Customer::Customer(string &username, vector<Drinks *> &items) {
    setUsername(username);
}



//}



