#include<stdio.h>

int main(){
    int n = 6 , k = 3 ,  j=3;
    // int item = 7;

    int arr[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        printf("%d" , arr[i]);
    }
    // n += 1;
    while (j<n)
    {
        arr[j-1] = arr[j];
        j = j+1;
    }
    // arr[k] = item;
    n -=1;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d" , arr[i]);
    }
    
     
    
    
    return 0;

}