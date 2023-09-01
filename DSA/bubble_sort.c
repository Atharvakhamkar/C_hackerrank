
// ****** DATE :- 03/08/2023   
 

#include <stdio.h>

int main()
{

    int temp;
    int arr[] = {23, 65, 1, 32};
    int i = 0, j = 0;

    int n = sizeof(arr) / sizeof(arr[0]);
    int si = sizeof(arr);
    printf("%d \n", n);
    printf("%d \n", si);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // printf("\n");
    }
    printf("value of j %d \n", j);
    printf(" value of i --%d \n", i);

    printf("Sorted array \n");

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}