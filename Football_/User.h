//
// Created by Annie on 23.1.2024 г..
//

#ifndef FOOTBALL_USER_H
#define FOOTBALL_USER_H
#include <iostream>
#include <string>

using namespace std;

class User {

public:
    User(string, string);

    const string &getName() const;

    void setName(const string &name);

    string getPassword();

    void setPassword(string password);

private:
string name;
string password;

};


#endif //FOOTBALL_USER_H
