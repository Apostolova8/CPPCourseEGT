#include <iostream>
using namespace std;

int main() {
	for (int i = 100; i <= 999; i++) {
		int sum = 0;
		int digit1 = (i / 100) % 10;
		int digit2 = (i / 10) % 10;
		int digit3 = i % 10;
		sum = digit1 + digit2 + digit3;
		cout << "The digits in " << i << " are " << digit1 << ", " << digit2 << ", " << digit3 << " " << "and the sum of this digits is " << sum << endl;
	}
}