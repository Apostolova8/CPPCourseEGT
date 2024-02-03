#include <iostream>
using namespace std;

int main() {
	
	for (int i = 1; i <= 100; i = i + 2) 
		if (i % 7 == 0)
			cout << "Number that is divisible by 7 is " << i << "\n\n";
	
	int sum = 0;
	for (int i = 1; i <= 100; i = i + 2)
		if (i % 7 == 0)
		sum += i;
		cout << "The sum of numbers from 1 to 100 that are divisible by 7 is " << sum << endl;
}