#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] % 2 == 0)
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}