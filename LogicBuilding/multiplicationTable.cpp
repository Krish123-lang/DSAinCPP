#include <iostream>
using namespace std;
int main()
{
    int number;
    int upto;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter upto: ";
    cin >> upto;

    for (int i = 1; i <= upto; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}

/*
Enter number: 6
Enter upto: 10
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54
6 x 10 = 60
*/