//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_CLASSES_HOMEWORK_BOOK_H
#define CODINGTASKS_CLASSES_HOMEWORK_BOOK_H
#include <iostream>

using namespace std;

class Book {

public:
    Book(string, string, int);  //constructor

    void display(); //display method

    //set and get methods to access book details:

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    int getPages() const;

    void setPages(int pages);

private:
    string title;
    string author;
    int pages;
};


#endif //CODINGTASKS_CLASSES_HOMEWORK_BOOK_H
