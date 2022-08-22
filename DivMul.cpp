#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int n = 1000; n <= 2000; n++)
    {
        if (n % 8 == 0 && n % 5 == 0)
            cout << n << " ";
    }
    return 0;
}
