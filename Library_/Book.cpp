//
// Created by Annie on 19.1.2024 г..
//
#include "Book.h"
#include "Author.h"
#include <iostream>

using namespace std;

void Book::setBookName(string bookName) {
    this->bookName=bookName;
}

void Book::setGenre(string genre) {
    this->genre=genre;
}

void Book::setYear(int year) {
    this->year=year;
}

void Book::print() {
    cout << endl;
    cout << "Book title is: " << getBookName() << "." << endl;
    cout << "Author is: " << author.getFirstName() << " " << author.getLastName() << endl;
    cout << "The genre is: " << getGenre() << "." << endl;
    cout << "Published year is: " << getYear() << "." << endl;
    cout << endl;
}

string Book::getBookName() const {
    return this->bookName;
}

string Book::getGenre() {
    return this->genre;
}

int Book::getYear() {
    return this->year;
}

Book::Book(string bookName, string genre, int year, Author a) : author(a) {
    setBookName(bookName);
    setGenre(genre);
    setYear(year);
}

Author Book::getAuthor() {
    return this->author;
}

void Book::setAuthor(Author a) {
    this->author=a;
}

