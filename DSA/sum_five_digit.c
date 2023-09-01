#include <stdio.h>

int main()
{
int a;
    int n, sum = 0;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    while (n != 0)
    {
         a = (n % 10);
        n /= 10;
        // printf("the divided value is %d\n", n);
        printf("\n%d", a);
        sum+=a;
    }
      printf("\n%d",sum);

    return 0;
}