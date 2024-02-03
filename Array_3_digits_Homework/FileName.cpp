#include <iostream>
using namespace std;

int main() {

	int n; //lenght of array
	cout << "Enter the lenght of array: ";
	cin >> n;
	int arr[1000][9999]; //array
	
	for (int i = 0; i < n; ++i) { //include all elements in arr[i]
		cout << "Enter number: ";
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		int digits = 0;
		digits = (arr[i] / 1000 % 10;  arr[i] / 100) % 10; (arr[i] / 10) % 10; arr[i] % 10; //sum the digits in every number
		if (arr[i] / 1000 % 10 == (arr[i] / 10) % 10)
			cout << arr[i];
	}
}