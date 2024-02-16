//
// Created by Annie on 16.2.2024 г..
//

#include "Book.h"

Book::Book(string title, string author, int pages) {
    setTitle(title);
    setAuthor(author);
    setPages(pages);
}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

int Book::getPages() const {
    return pages;
}

void Book::setPages(int pages) {
    Book::pages = pages;
}

void Book::display() {
    cout << "Book's title: " << getTitle() << endl;
    cout << "Book's author: " << getAuthor() << endl;
    cout << "Book's pages: " << getPages() << endl;
}

