#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <=b; i++)
    {
        switch (i)
        {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine");
            break;
        
        default:
        if (i%2==0)
        {
            printf("\nEven");
        }
        else
        {
            printf("\nodd");
        }
        

            break;
        }
    }
    

    return 0;
}



// Task

// For each integer  in the interval a,b (given as input) :

// If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".
// Input Format

// The first line contains an integer,a .
// The seond line contains an integer,b .

// Constraints

// 1<=a<=b<=1000000

// Output Format

// Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

// Sample Input

// 8
// 11
// Sample Output

// eight
// nine
// even
// odd