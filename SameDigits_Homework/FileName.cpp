#include <iostream>
using namespace std;

int main() {

    int count = 0; //���������� �����, ���� ����� �� �� ������� ������ �����, ����� �� � ���������

    for (int number = 1000; number < 9999; ++number) { //�������� ������� �� 1000 �� 9999 ��� ��� �����

        int Digit1 = number / 1000; //����� �����
        int Digit2 = (number / 100) % 10; //����� �����
        int Digit3 = (number / 10) % 10; //����� �����
        int Digit4 = number % 10; //�������� �����

        if (Digit1 == Digit3) { //��� ������� � ������� ����� �� �������
            cout << number << endl; //�������� �������

            ++count; //���������� ������ �� �������, ����� �� � ���������
        }
    }
    cout << "Numbers, which first and third digits are the same are " << count << "." << endl;

}
