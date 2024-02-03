#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int m, n;

    cout << "Enter the power (m) : "; //m - stepen
    cin >> m;

    cout << "Enter the limit: "; //n - granica
    cin >> n;

    for (int i = 0; (pow(i, m)) < n; ++i)
    if (pow(i, m) < n) {
        cout << i << "^" << m << " is " << (pow(i, m)) << " " << "and it is less than limit - " << n << endl;
    }

    return 0;
}
