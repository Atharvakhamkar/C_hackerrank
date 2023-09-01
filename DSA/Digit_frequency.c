#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// #define MAX_LIMIT 10
int main()
{
    char str[500];
    int counter[10] = {0};
    gets(str);
    for (int i = 0; i < str[i]; i++)
    {
        
        if (str[i] >= '0' && str[i] <= '9')
        {
            counter[(str[i] - '0')]++;
        }
    }
    for (int i = 0; i < str[i]; i++)
    {
        printf("%d ", counter[i]);
    }

    // char str[MAX_LIMIT] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int total;
    // char num_len[MAX_LIMIT];
    // scanf("%s", num_len);
    // // fgets(num_len, MAX_LIMIT, stdin);
    // strcmp(str, num_len);
    // if (total == 0)
    //     printf("\n same string \n");
    // else
    //     printf("\n not same \n");

    // printf("%s", num_len);

    // int arr[10];
    // int n;
    // int len = sizeof(arr) / sizeof(arr[0]);
    // int count;
    // printf("Enter the number \n");

    // for (int i = 0; i < len; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = i+1; j <len ; j++)
    //     {
    //         if (arr[i]==arr[j])
    //         {
    //             count++;
    //             // printf(" 1. %d \n",count);
    //         }
    //             printf("2. %d \n",count);

    //     }
    //             printf("3. %d \n",count);

    // }
    //             printf("4. %d \n",count);

    return 0;
}
