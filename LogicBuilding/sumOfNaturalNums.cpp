#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num;

    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "the sum of natural numbers: " << sum << endl;
    return 0;
}
/*
Enter the number: 5
the sum of natural numbers: 15
*/