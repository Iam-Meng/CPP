#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;

    cout << "x = " << x << '\n';
    cout << "&x = " << &x << '\n';
    cout << "p = " << p << '\n';
    cout << "*p = " << *p << '\n';

    // TODO: modify *p and reprint
    *p = 100;
    cout << "x = " << x << '\n';
    cout << "&x = " << &x << '\n';
    
    /*
        x = 42
        &x = 0x92963ff994
        p = 0x92963ff994
        *p = 42

        x = 100
        &x = 0x92963ff994
    */

    return 0;
}
