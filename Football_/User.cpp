//
// Created by Annie on 23.1.2024 г..
//

#include "User.h"
#include <iostream>
#include <string>

using namespace std;

const string &User::getName() const {
    return name;
}

void User::setName(const string &name) {
    User::name = name;
}

string User::getPassword() {
    return password;
}

void User::setPassword(string password) {
    if(password.length()>4 && password.length() <20){
        this->password=password;
    } else{
        while (!(password.length()>4 && password.length() <20)){
            cout << "Incorrect password. Try again. ";
            cin >> password;
        }
        this->password = password;
    }
}

User::User(string name, string password) {
    setName(name);
    setPassword(password);
}
