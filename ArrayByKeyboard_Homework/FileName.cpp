#include <iostream>
using namespace std;

int main() {
	int A[100];
	int n;
	cout << "Enter lenght of array: ";
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "Enter number: ";
		cin >> A[i];
		if (A[i] > 0)
			cout << A[i];
	}

}