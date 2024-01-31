#include <iostream>
#include "Book.h"
#include "Author.h"
#include "Library.h"

using namespace std;

int main() {

    Author author1( "Stephen", "King", "American");
    //author1.print();

    Author author2("John", "Tolkien", "American");
    //author2.print();

    Author author3("Sarah", "Maas", "American");
    //author3.print();

    Author author4("J.K.", "Rowling", "American");
    //author4.print();

    Author author5("Fyodor", "Dostoevsky", "Russian");
    //author5.print();

    Author author6("Josie", "Silver", "British");
    //author6.print();


    Book book1("IT", "horror", 2010, author1);
    //book1.print();

    Book book2("Lord of the rings", "fantastic", 1995, author2);
    //book2.print();

    Book book3("A court of thorns and roses", "fantasy", 2015, author3);
    //book3.print();

    Book book4("Harry Potter", "fantasy", 2001, author4);
    //book4.print();

    Book book5("White nights", "novel", 1848, author5);
    //book5.print();

    Book book6("A winter in NY", "romance", 2023, author6);
    //book6.print();

    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.addBook(book6);
    //library.print();

    string searchAuthor;
    cout << "Enter author's name to search for a book: ";
    getline(cin, searchAuthor);
    library.searchByAuthor(searchAuthor);

    string word;
    cout << "Enter a title or piece of a title to search for a book: ";
    getline(cin, word);
    library.searchByName(word);

    return 0;
}
