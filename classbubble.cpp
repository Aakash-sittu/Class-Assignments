#include <iostream>
using namespace std;
void print(int arr[], int n)
{

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (counter == 3)
        {
            cout << "Array in the 3rd iteration looks like this:";
            for (int a = 0; a < n; a++)
                cout << arr[a] << " ";
        }
        counter++;
    }
    cout << endl;
    cout << "Sorted array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    cout << endl;
    return 0;
}