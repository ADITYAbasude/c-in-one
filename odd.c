#include<stdio.h>

int main(){
    int s  ;
    printf("Enter a value : \n");
    scanf("%d" , &s);
    if (s%2==0)
    {
        printf("s is even number");
    }
     
    else if (s%2!=0)
    {
        printf("s is odd number");
    }
    

    return 0;
}