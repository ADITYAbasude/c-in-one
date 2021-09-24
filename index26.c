#include<stdio.h>

int main(){
    int a[5] = {5,2,6,4,4};
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d\n" , i, *(p+i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d\n" , i , *(a+i));
    }
    
    
    return 0;

}