//
// Created by Annie on 19.1.2024 г..
//

#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include "Book.h"
#include <iostream>
#include <vector>

using namespace std;

class Library {

public:

    void addBook(Book);

    void searchByName(string searchName);

    void searchByAuthor(string word);

    virtual void print();


private:

    vector<Book> books;
};


#endif //LIBRARY_LIBRARY_H
