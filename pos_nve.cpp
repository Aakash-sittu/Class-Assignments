#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num > 0)
        cout << num << " is positive" << endl;
    else if (num < 0)
        cout << num << " is negative" << endl;

    return 0;
}
