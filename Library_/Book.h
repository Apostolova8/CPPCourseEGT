//
// Created by Annie on 19.1.2024 г..
//
#include <string>
#include <iostream>
#include "Author.h"

using namespace std;

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

class Book {

public:

    Book(string, string, int, Author);


    virtual void print();

    void setBookName(string);

    string getBookName() const;

    void setGenre(string);

    string getGenre();

    void setYear(int);

    int getYear();

    Author getAuthor();

    void setAuthor(Author);

private:

    string bookName;
    string genre;
    int year;
    Author author;

};


#endif //LIBRARY_BOOK_H
