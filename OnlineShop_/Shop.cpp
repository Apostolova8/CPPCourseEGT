/*
//
// Created by Annie on 24.1.2024 г..
//

#include "Shop.h"

Shop::Shop(std::string shopName)
{
    this->shopName = shopName;
}

void Shop::addBeverage(Beverage* beverage, unsigned quantity)
{
    if (beverageList.find(beverage) != beverageList.end()) {
        beverageList.find(beverage)->second += quantity;
    }
    beverageList.insert({ beverage,quantity });
}

void Shop::sellBeverage(Beverage* beverage, unsigned quantity)
{
    if (beverageList.find(beverage) != beverageList.end() && beverageList.find(beverage)->second >= quantity) {
        beverageList.find(beverage)->second -= quantity;
        //std::cout << "asdasd" << std::endl;
        if (soldList.find(beverage) != soldList.end()) {
            soldList.find(beverage)->second += quantity;
        }
        else soldList.insert({ beverage,quantity });

    }
    else std::cout << "Not enough quanity, current quantity: " << beverageList.find(beverage)->second << std::endl;
}

void Shop::setShopName(std::string shopName)
{
    if (shopName != "") this->shopName = shopName;
}

void Shop::printInfo()
{
    std::cout << " -------------------------" << std::endl;
    std::cout << "Shop name: " << this->shopName << std::endl;

    std::map<Drinks*, unsigned>::iterator ptr = drinksList.begin();
    while (ptr != drinksList.end()) {
        ptr->first->print();
        std::cout << "Quantity in stock: " << ptr->second << std::endl;
        ptr++;
    }
}

const std::string Shop::getShopName()
{
    return this->shopName;
}

void Shop::printSoldBeverages()
{
    std::map<Drinks*, unsigned>::iterator ptr = soldList.begin();
    while (ptr != soldList.end()) {
        std::cout <<"Product name: " << ptr->first->getName() << std::endl;
        std::cout <<"Quantity sold: "<<  ptr->second << std::endl;
        ptr++;
    }
}

void Shop::addCustomer(Customers* customer)
{
    this->customerList.insert(customer);
    //customer->printClientInfo();
    //std::vector<Order>::iterator ptr = this->customerList.find(customer)->getOrderList().begin();
    //std::vector<Order>::iterator ptr = (customer->getOrderList()).begin();
    for ( Orders o: customer->getOrder()) {
        for (std::pair< Drinks*, unsigned> bev : o.getDrinksList()) {
            sellBeverage(bev.first, bev.second);
        }
    }

    //while (ptr != customer->getOrderList().end()) {
    //	std::vector <std::pair<Beverage*, unsigned>>::iterator ptr2 = ptr->getBeverageList().begin();
    //	//sellBeverage(ptr->g);
    //	while (ptr2 != ptr->getBeverageList().end()) {
    //		sellBeverage(ptr2->first, ptr2->second);
    //	}
    //}
}
*/
