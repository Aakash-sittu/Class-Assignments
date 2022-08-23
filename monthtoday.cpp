#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter month in all small: ";
    cin >> s;
    if (s == "january")
        cout << "31" << endl;
    else if (s == "february")
        cout << 31 + 28 << endl;
    else if (s == "march")
        cout << 31 + 28 + 31 << endl;
    else if (s == "april")
        cout << 31 + 28 + 31 + 30 << endl;
    else if (s == "may")
        cout << 31 + 28 + 31 + 30 + 31 << endl;
    else if (s == "june")
        cout << 31 + 28 + 31 + 31 + 30 + 30 << endl;
    else if (s == "july")
        cout << 181 + 31 << endl;
    else if (s == "august")
        cout << 181 + 31 + 31 << endl;
    else if (s == "september")
        cout << 31 + 31 + 30 + 181 << endl;
    else if (s == "october")
        cout << 273 + 31 << endl;
    else if (s == "november")
        cout << 273 + 31 + 30 << endl;
    else if (s == "december")
        cout << 273 + 31 + 30 + 31 << endl;
    else
        cout << "Cannot Compute" << endl;
    return 0;
}
