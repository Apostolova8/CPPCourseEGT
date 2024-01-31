//
// Created by Annie on 19.1.2024 г..
//

#ifndef CARSSYSTEM_CARS_H
#define CARSSYSTEM_CARS_H
#include <iostream>
#include <string>

using namespace std;

class Cars {

public:

    Cars(string, string, string, string, string, string, double, double, double);

    Cars();

    const string &getBrand() const;

    void setBrand(const string &brand);

    const string &getModel() const;

    void setModel(const string &model);

    const string &getType() const;

    void setType(const string &type);

    const string &getColor() const;

    void setColor(const string &color);

    string getId() const;

    void setId(string id);

    string getNumber() const;

    void setNumber(string number);

    double getFuel() const;

    void setFuel(double fuel);

    double getTax() const;

    void setTax(double tax);

    double getTraveledDistance() const;

    void setTraveledDistance(double traveledDistance);

    void print();

    void calculatePrice();

    void familyTax();

    void luxuryTax();

private:

    string brand;
    //marka
    string model;
    //model
    string type;
    //vid (kombi, sedan, hechbek)
    string color;
    //cvqt
    string id;
    //nomer na shasi
    string number;
    //nomer na kolata
    double fuel;
    //razhod na gorivo
    double tax;
    //taksa za polzvane - v leva na den
    double traveledDistance;
    //izminato razstoqnie ot klienta
    double finalTax;
};

#endif //CARSSYSTEM_CARS_H
