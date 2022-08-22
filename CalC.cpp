#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;

    cout << "1. Addition." << endl;
    cout << "2. Multiplication." << endl;
    cout << "3. Subtraction." << endl;
    cout << "4. Division." << endl;
    cout << "Enter number for the following operations." << endl;
    cin >> c;
    cout << "Enter the 2 numbers(ONLY Integer type!)" << endl;
    cin >> a >> b;
    switch (c)
    {

    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a * b << endl;
        break;
    case 3:
        cout << a - b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;
    default:
        cout << "ERROR!" << endl;
    }

    return 0;
}
