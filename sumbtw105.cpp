#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, sum;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    sum = a + b;
    if (sum >= 105 && sum <= 200)
        sum = 200;
    cout << sum << endl;
    return 0;
}
