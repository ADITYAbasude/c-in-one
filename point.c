#include<stdio.h>

int main(){
    int a  = 5;
    int *b = &a;    
    printf("your value is : %u" , b);
    printf("your value is : %u" , &b*&a);
    return 0;

}