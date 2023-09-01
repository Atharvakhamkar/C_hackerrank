#include <stdio.h>

// cal_height(int n,int l,int b,int h)
// {
//     int num = n;

// }

int main()
{

    int boxes[10][10];
    int n;
    scanf("%d", &n);

    int store[10];
    int vol;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the length of the box\n");
        scanf("%d", &boxes[i][0]);
        printf("Enter the breath of the box\n");
        scanf("%d", &boxes[i][1]);
        printf("Enter the height of the box\n");
        scanf("%d", &boxes[i][2]);

        vol = (boxes[i][0]*boxes[i][1]*boxes[i][2]);

        store[i]=vol;

    }
    for (int i = 0; i < n; i++)
    {
        if (boxes[i][2]<=40)
        {
            printf("box number %d with vol %d passed through tunnel \n ",i+1,store[i]);
        }
        
    }
    

    return 0;
}