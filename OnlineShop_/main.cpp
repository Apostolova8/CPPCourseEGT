

/*
#include <iostream>
#include "Drinks.h"
#include "AlcoholicDrinks.h"
#include "NoAlcoholicDrinks.h"
#include "Orders.h"
#include "Customers.h"
#include <vector>

using namespace std;

//int main() {

*/
/*    AlcoholicDrinks drink1 ("Alcoholic drink", "Wine", 1.5, 0.7, "Cycle", 15.0, 30);
    drink1.print();
    double finalPrice = drink1.calculatePrice();
    cout << "Final price with tax: " << finalPrice << endl;

    cout << endl;

    NoAlcoholicDrinks drink2 ("Non - alcoholic drink", "Cold tea", 0.5, 1.5, "Nestea", 2.5, 25);
    drink2.print();
    double finalPrice2 = drink2.calculatePrice();
    cout << "Final price with city tax: " << finalPrice2 << endl;

    cout << "Enter username: " << endl;
    string username;
    cin >> username;
    cout << "Your orders are: " << endl;

    Customers customers ("Ana");
    Orders orders ("First order: ", 98.0, 98, 9, "ji");

    vector<Drinks*> drinksList;
    Drinks *aPtr = new AlcoholicDrinks("Alcoholic drink", "Wine", 1.5, 0.7, "Cycle", 15.0, 30);
    orders.addDrink(aPtr);
    Drinks *aPtr2 = new NoAlcoholicDrinks("Non - alcoholic drink", "Ice tea", 0.5, 1.5, "Nestea", 2.5, 25);
    orders.addDrink(aPtr2);

    orders.print();

return 0;*/


/*#include <iostream>
#include "Drinks.h"
#include "AlcoholicDrinks.h"
#include "NoAlcoholicDrinks.h"
#include "Orders.h"
#include "Customers.h"
#include "Foods.h"
#include <vector>*/

using namespace std;

    //int main() {

/*        AlcoholicDrinks drink1 ("Alcoholic drink", "Wine", 1.5, 0.7, "Cycle", 15.0, 30);

        NoAlcoholicDrinks drink2 ("Non - alcoholic drink", "Cold tea", 0.5, 1.5, "Nestea", 2.5, 25);

        Orders order1 (12532, "23.01.2024");
        order1.drinksList.push_back(&drink1);
        order1.drinksList.push_back(&drink2);

        Foods item1 ("Biscuits", 3.0, 2);

        Orders orders(8264, "23.01.2024");
        order1.AddDrink(&drink1);
        order1.AddDrink(&drink2);
        order1.AddFood(item1);

        order1.DisplayOrderDetails();
    }*/

#include <iostream>
#include "Shop.h"

        int main() {

            AlcoholicDrinks a("Beer", "Kamenica", 2.54, 1, 3.2);
            NoAlcoholicDrinks b("Ice tea", "Nestea", 2.54, 1);
            AlcoholicDrinks a1("Vodka", "Absolut", 21.76, 0.7, 4);
            NoAlcoholicDrinks b1("Fuzzy drink", "Coca-Cola", 2.7, 1.5);
            NoAlcoholicDrinks b2("Fuzzy drink", "Fanta", 2.7, 1.5);
            /*a.printInfo();
            a.setPrice(42);
            a.setName("potato");
            a.printInfo();
            b.printInfo();*/

            Shop shop("Takos & boritos");
            shop.addDrinks(&a, 1000);
            shop.addDrinks(&b, 1000);
            shop.addDrinks(&a1, 1000);
            shop.addDrinks(&b2, 1000);
            shop.addDrinks(&b1, 1000);
            Order o(&a, 15, 0, 0, std::string());
            ///o.addToOrder(&a, 43);
            //o.addToOrder(&b, 43);
            Order o1(&a, 12, 0, 0, std::string());
            Order o2(&b1, 23, 0, 0, std::string());
            Order o3(&b2, 123, 0, 0, std::string());
            Order o4(&a1, 223, 0, 0, std::string());

            Customers c("Gosho");
            Customers d("Ivo");
            Customers e("Ana");

/*            a.addOrder(&a);
            c.addOrder(&b1);
            d.addOrder(&b2);
            e.addOrder(o);
            e.addOrder(o5);*/

            shop.addCustomer(&c);
            shop.addCustomer(&d);
            shop.addCustomer(&e);
            //c.printClientInfo();
            shop.printSoldBeverages();
        }





