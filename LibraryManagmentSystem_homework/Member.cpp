//
// Created by Annie on 31.1.2024 г..
//

#include "Member.h"
#include "Book.h"

const string &Member::getName() const {
    return name;
}

void Member::setName(const string &name) {
    Member::name = name;
}

int Member::getAge() const {
    return age;
}

void Member::setAge(int age) {
    Member::age = age;
}

const string &Member::getMemberId() const {
    return memberID;
}

void Member::setMemberId(const string &memberId) {
    memberID = memberId;
}

Member::Member(string name, int age, string memberID) {
    setName(name);
    setAge(age);
    setMemberId(memberID);
}

void Member::display() {
    cout << "Name: " << this->getName() << endl << "Age: " << this->getAge() << endl << "MemberID: " << this->getMemberId() << endl; //display member
}

void Member::borrowBook(Book* book) {
    cout << name << " borrowed book: " << endl; //who borrowed which book
    book->display();
}


