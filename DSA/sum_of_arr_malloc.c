// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
// int n,i[10];
// scanf("%d",&n);
// for (int j=0; j<n; j++)  {
// //   scanf("%d",&i[j]);
// scanf(stdin);
// }
// int sum=0;
// for (int k=0; k<n; k++) {
//     sum+=i[k];
// }
// printf("%d",sum);

  
       
//     return 0;
// }
  
//   Written by me atharva khamkar  

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int n,sum=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}