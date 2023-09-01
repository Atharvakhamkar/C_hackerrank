#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2, 7, 9, 1, 3, 8, 5, 11};

    int n = sizeof(arr) / sizeof(arr[0]);
    int mid;
    int temp;

    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    // key value
    // int x;
    // int l = 0;
    // int r = n - 1;
    // cout<<endl<<"Enter the key to search in the array";
    // cin >> x;

    // while (l <= r)
    // {
    //     mid = l + (r - 1) / 2;

    //     if (arr[mid] == x)
    //     {
    //         cout << "The Element is present " << arr[mid];
    //     }
    //     if (arr[mid] < x)
    //     {
    //         l = mid + 1;
    //     }

    //     else
    //     {
    //         r = mid - 1;
    //     }
    // }
    // cout <<endl<< "The element is not present"<< x;

    return 0;
}