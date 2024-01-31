#include <iostream>
#include "Data.h"

using namespace std;

int main() {

    Data data1(3);

    ++data1;    //prefix
    cout << "After prefix: " << data1.getValue() << endl;

    Data data2 = data1++;   //postfix
    cout << "After postfix: " << data2.getValue() << endl;

    return 0;
}
