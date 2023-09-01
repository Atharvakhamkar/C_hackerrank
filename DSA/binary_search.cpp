#include<iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 7, 9, 17, 24, 38, 41, 55, 69, 73, 84};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 12;

    // cout << n;
    // cout << sizeof(arr);

    int result = binary_search(arr, 0, n - 1,target);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

    return 0;
}