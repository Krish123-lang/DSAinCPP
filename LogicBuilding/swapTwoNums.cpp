#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 4;
    cout << "Before swapping:" << a << ", " << b << endl;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    swap(a, b);
    cout << "After swapping:" << a << ", " << b << endl;
    return 0;
}
/*
Before swapping:5, 4
After swapping:4, 5
*/