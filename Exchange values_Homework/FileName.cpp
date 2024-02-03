#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int temp;

	cin >> a;
	cin >> b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}