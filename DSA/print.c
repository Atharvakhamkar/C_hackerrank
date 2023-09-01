#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    for (i = n; i >=1; i--)
    {
        for (j = n; j >=i; j--)
        {
            printf("%d", j );
        }
            for (int  k = n-i; k < n; k++)
            {
                printf("%d",n);
            }
            printf("\n");
    }
    return 0;
}