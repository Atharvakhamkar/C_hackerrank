#include<iostream>

using namespace std;
int Add_arr(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;   
}

int main()
{

    int arr[] = {3, 5, 2, 1};
    int result;

    result = Add_arr(arr,4);

    cout<<"The addition of the arrya is "<<result;

    return 0;
}


kra aata te install
ha 
 de krun 