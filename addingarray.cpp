#include <iostream>
#include <algorithm>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int m, int n, int arr[])
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        arr2[k] = arr[i];
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        arr2[k] = arr1[i];
        k++;
    }
    sort(arr2, arr2 + (n + m));
    cout << "The sorted and merged array is as follows: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << arr2[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int arr[n], arr1[m], arr2[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    mergeArrays(arr1, arr2, m, n, arr);
    return 0;
}
