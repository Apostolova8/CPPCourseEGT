//
// Created by Annie on 31.1.2024 г..
//

#ifndef LIBRARYMANAGMENTSYSTEM_HOMEWORK_BOOK_H
#define LIBRARYMANAGMENTSYSTEM_HOMEWORK_BOOK_H
#include <iostream>

using namespace std;

class Book {

public:
    Book(string, string, string);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    const string &getIsen() const;

    void setIsen(const string &isen);

    void display();

private:
    string title;
    string author;
    string ISEN;
};


#endif //LIBRARYMANAGMENTSYSTEM_HOMEWORK_BOOK_H
