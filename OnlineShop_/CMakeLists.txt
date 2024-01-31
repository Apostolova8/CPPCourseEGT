cmake_minimum_required(VERSION 3.27)
project(OnlineShop)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineShop main.cpp
        AlcoholicDrinks.cpp
        AlcoholicDrinks.h
        Drinks.cpp
        Drinks.h
        NoAlcoholicDrinks.cpp
        NoAlcoholicDrinks.h
        Customers.cpp
        Customers.h
        Orders.cpp
        Orders.h
        Foods.cpp
        Foods.h
        Shop.cpp
        Shop.h
)
