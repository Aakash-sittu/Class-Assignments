#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year % 400 == 0 && year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is a Leap year! :)" << endl;
    }
    else
        cout << year << " is not a Leap year! :(" << endl;
    return 0;
}
