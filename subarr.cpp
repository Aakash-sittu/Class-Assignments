#include <iostream>
using namespace std;

int maxSum(int arr[], int n)
{

    int max_so_far = 0;

    int max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];

        max_ending_here = max(max_ending_here, 0);

        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
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

    cout << "The maximum sum of a contiguous subarray is " << maxSum(arr, n);

    return 0;
}