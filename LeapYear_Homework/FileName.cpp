#include <iostream>
using namespace std;

int main() {
	int date;
	bool leapYear;
	int months[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	int firstDay;
	cin >> firstDay >> leapYear;
	int monthSize[] = { 31, 28, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31 };
	monthSize[1] += leapYear;

	for (int i = 0; i < 12; ++i) {
		if ((firstDay + 12) % 7 == 4) {
			months[i] += 1;
			firstDay = (firstDay + monthSize[i]) % 7;
		}
	}

	for (int i = 0; i < 12; ++i) {
		cout << months[i] << " ";
	}

	cout << endl;

	return 0;
}