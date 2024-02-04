#include <iostream>
#include <vector>
#include "Drinks.h"
#include "Foods.h"
#include "Customers.h"
#include "Orders.h"

int main() {

    AlcoholicDrinks ad{"Cycle", "Wine", 25, 2, 0.7, 0.4};
    NoAlcoholicDrinks nad{"Nestea", "Iced tea", 2.5, 1, 0.5, 0.2};
    ad.print();
    nad.print();

    Food f1{"Twinings", "Tea", 2.2, 3};
    Food f2{"Milka", "Chocolate", 2.5, 2};
    f1.print();
    f2.print();

/*    Customer::Customer c1{"Ana", {&ad, &f2}};
    Customer c2{"Martin", {&nad, &f1}};

    Orders::Order order1{{&ad, &f1}, "2024-02-04", 0.0*/


}