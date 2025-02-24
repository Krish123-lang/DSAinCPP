#include <iostream>
using namespace std;

int main()
{
    int number_to_check;
    cout << "Enter the number to check: ";
    cin >> number_to_check;

    if (number_to_check % 2 == 0)
    {
        cout << number_to_check << " is an even number." << endl;
    }
    else
    {
        cout << number_to_check << " is an odd number." << endl;
    }
    return 0;
}

/*----------------------
Enter the number to check: 6
6 is an even number.

Enter the number to check: 7
7 is an odd number.
------------------------*/
