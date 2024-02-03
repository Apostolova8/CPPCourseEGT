#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter columns: ";
    cin >> m;

   
    int A[n][m]; //�������� �������� �����

    cout << "Enter the elements: "; 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "A[" << i << "][" << j << "]: "; 
            cin >> A[i][j]; //����������� ������� ���������� �� ������
        }
    }

    int sum = 0;
    for (int i = 1; i < n; i += 2) {  //������ � ������� �������
        for (int j = 0; j < m; ++j) { 
            if (A[i][j] < 0) { //������� ���������� � ����������� ��������
                sum += A[i][j];
            }
        }
    }
    cout << "Sum of negative elements: " << sum << endl; //�������� ���������

}