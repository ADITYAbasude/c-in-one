#include<stdio.h>

int main(){
    double  a  = 5;
    double *b = &a;
    printf("%u \n" , b);
    b++;
    printf("%u \n" , b);
    b++;
    printf("%u" , b);
    
    return 0;

}