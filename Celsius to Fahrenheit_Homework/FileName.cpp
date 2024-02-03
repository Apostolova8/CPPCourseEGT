#include <iostream>
using namespace std;

int main() {

	cout << "What is the temperature in Celsius?" << endl;
	double c;

	cin >> c;
	double f = (c * 33.8);

	cout << "The temperature in Fahrenheit is" << endl;
	cout << f << endl;

	return 0;
}

