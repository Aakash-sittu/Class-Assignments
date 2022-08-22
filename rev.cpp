#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cout << "Single word, cannot accept more than 1 word." << endl;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
