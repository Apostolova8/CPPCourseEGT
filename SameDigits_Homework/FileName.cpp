#include <iostream>
using namespace std;

int main() {

    int count = 0; //интегрирам брояч, чрез който ще се изпишат всички числа, които са в условието

    for (int number = 1000; number < 9999; ++number) { //въвеждам числата от 1000 до 9999 във фор цикъл

        int Digit1 = number / 1000; //първа цифра
        int Digit2 = (number / 100) % 10; //втора цифра
        int Digit3 = (number / 10) % 10; //трета цифра
        int Digit4 = number % 10; //четвърта цифра

        if (Digit1 == Digit3) { //ако първата и втората цифра са еднакви
            cout << number << endl; //извеждам числото

            ++count; //увеличавам брояча на числата, които са в условието
        }
    }
    cout << "Numbers, which first and third digits are the same are " << count << "." << endl;

}
