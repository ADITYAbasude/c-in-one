#include<stdio.h>

int main(){
    int a , b, c;
    printf("Enter number a = ");
    scanf("%d" , &a);

    printf("Enter number b = &a" &a);
    scanf("%d" , &b);


    c=a;
    a=b;
    b=c;


    printf(" a = %d and b = %d" , a ,b );

    return 0 ;
}