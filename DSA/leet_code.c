#include <stdio.h>

int main()
{

    int arr[] = {4, 6, 2, 7, 9, 3};
    int target = 12;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("the index of arrays are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i);
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = j+1; k <n ; k++)
      
        
        if ((arr[j] + arr[k]) == target)
        {
            printf("\n the index %d and %d", j, k );
        }
    }

    // printf(" \n There is no target ");

    return 0;
}
