//programa, opredelqshta mestata, zapazeni za poleta, bez da ima dublirane
//kapacitet - 10 mesta

#include <iostream>
using namespace std;

int main() {

	int seats[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int s; //wanted seat

	for (int i = 0; i < 10; i++) {
		cout << seats[i] << endl;
	}

	cout << "Enter seat number: ";
	cin >> s;



	int customers = 10;
	int currentCustomer = 0;
	while (currentCustomer < customers) {
		int newS;
		cout << "Enter seat number: ";
		cin >> newS;
	
		if (seats[newS] == 0) {
			//can seat
			seats[newS] = 1;
			cout << "Seat " << newS << "is seated" << endl;
		}
		else {
			//cannot seat
			cout << "We have to find free seat" << endl;
			for (int j = 0; j < 10; j++) {
				if (seats[j] == 0) {
					seats[j] == 1;
					cout << "New free seat" << j << endl;
				}
			}
		}
	}

}