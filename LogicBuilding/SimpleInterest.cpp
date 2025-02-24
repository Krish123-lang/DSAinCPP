#include <iostream>
using namespace std;
int main()
{
    float p, t, r, si;
    cout << "Enter the value of P, T, R: ";
    cin >> p >> t >> r;
    si = (p * t * r) / 100;
    cout << "Simple Interest: " << si << endl;
    return 0;
}
/*
Enter the value of P, T, R: 10003.445
4.5
9.2
Simple Interest: 4141.43
*/