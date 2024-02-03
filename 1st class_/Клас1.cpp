#include <iostream>
#include <string>
using namespace std;


class Car 
{
public:
	Car(string model, int year, string color, string fuel, string vin, string transmission, string plate)
	{
		setModel(model);
		setYear(year);
		this->color = color;
		this->fuel = fuel;
		this->vin = vin;
		this->transmission = transmission;
		this->plate = plate;
	}
	void setModel(string Model)
	{
		this->model = model;
	}
	string getModel()
	{
		return model;
	}
	void setYear(int year)
	{
		if (year > 1970 && year < 2024) {
			this->year = year;
		}
		else {
			this->year = 0;
			cout << "Invalid year. You must enter year between 1970 and 2024" << endl;
		}
	}

	int getYear()
	{
		return this->year;
	}
	void displayMessage()
	{
		cout << model << " " << year << " " << color << " " << fuel << " " << vin << " " << transmission << " " << plate << endl;
	}

private:
	string model;
	int year;
	string color;
	string fuel;
	string vin;
	string transmission;
	string plate;
};

int main() {
	Car firstCar("Audi", 2020, "green", "diesel", "827dh8d2", "auto", "CB 6348 KC");
	Car secondCar("BMW", 2006, "blue", "gasoline", "nckdm293i2", "manual", "EH 7462 TH");
	Car thirdCar("Peugeot", 2001, "gray", "methane", "7372hdiws", "auto", "CB 2750 KC");

	firstCar.displayMessage();
	secondCar.displayMessage();
	thirdCar.displayMessage();

	/*firstCar.setModel("Audi");
	firstCar.setYear(year);
	int carYear = firstCar.getYear();
	cout << "Car years is " << carYear;
	string model;
	cout << "Enter car model:";
	cin >> model;
	void setYear(int year);
	{
		this->year = year;
	}
	int getYear();
	{
		return this->year;
	}
	*/
		
	return 0;
}