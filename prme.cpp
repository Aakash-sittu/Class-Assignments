#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int j;
    int flag;
    for (int i = 100; i <= 500; i++)
    {
        j = 2;
        flag = 0;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
            j++;
        }
        if (flag == 0)
            cout << i << ", ";
    }
    cout << endl;
    return 0;
}