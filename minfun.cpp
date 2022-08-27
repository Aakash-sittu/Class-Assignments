#include <iostream>
#include <algorithm>
using namespace std;
void minfun(int a, int b, int c)
{
    int t;
    if (a > b)
        t = a;
    else
        t = b;
    if (t > c)
        cout << t << " is bigger." << endl;
    else
        cout << c << " is bigger." << endl;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    minfun(a, b, c);
    cout << endl;
    return 0;
    
}
