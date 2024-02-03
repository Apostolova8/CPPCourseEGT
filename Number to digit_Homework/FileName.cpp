#include <iostream>
using namespace std;

int main() {

	cout << "Enter a a three-digit number" << endl;
	int a;
	cin >> a;

	cout << (a / 100) % 10 << endl;
	cout << (a / 10) % 10 << endl;
	cout << a % 10 << endl;

	return 0;
}