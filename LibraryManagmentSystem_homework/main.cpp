#include <iostream>
#include "Book.h"
#include "Member.h"

using namespace std;

int main() {

    const int bookArray = 2; //array size
    const int memberArray = 2;

    Book books[bookArray] = {Book("IT", "Stephen King", "1g74hj"),Book("Lord of the rings", "John Tolkien", "5a98tr") }; //array from book objects

    Member members[memberArray] = {Member("Ana", 22, "AA42"),Member("Maria", 27, "KK37") }; //array from members

    members[0].borrowBook(&books[0]); //call borrowBook function
    cout << endl;
    members[1].borrowBook(&books[1]);


    return 0;
}







