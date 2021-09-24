#include<stdio.h>


int main(){
    static int a = 4;
    int *b = &a;
    printf("%u" , *b);
    return 0;

}