#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    while (1)
    {
        cout << "Enter the number: ";
        cin >> num;
        if (num > 0 || num == 0)
            sum += num;
        else
        {
            break;
        }
    }
    cout << "The sum is " << sum << "!";
    cout << endl;
    return 0;
}