//
// Created by Annie on 31.1.2024 г..
//

#ifndef LIBRARYMANAGMENTSYSTEM_HOMEWORK_MEMBER_H
#define LIBRARYMANAGMENTSYSTEM_HOMEWORK_MEMBER_H
#include <iostream>
#include <vector>
#include "Book.h"

using namespace std;

class Member {

public:
    Member(string, int, string);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getMemberId() const;

    void setMemberId(const string &memberId);

    void display();

    void borrowBook(Book* book);

private:
    string name;
    int age;
    string memberID;

};


#endif //LIBRARYMANAGMENTSYSTEM_HOMEWORK_MEMBER_H
