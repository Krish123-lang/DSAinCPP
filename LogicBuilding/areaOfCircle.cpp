#include <iostream>
using namespace std;

void areaOfCircle(int r)
{
    const float PI = 3.14;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area of circle: " << PI * r * r << endl;
}

int main()
{
    areaOfCircle(5.4);
    return 0;
}

/*
Enter radius: 6
Area of circle: 113.04
*/