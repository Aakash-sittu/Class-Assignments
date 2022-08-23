#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter a Single Word: ";
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;
    return 0;
}
