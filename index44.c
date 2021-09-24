#include<stdio.h>

int main(){
    int num1, num2;
    float flo1 ,flo2;

    scanf("%d %d" , &num1 , &num2);
    scanf("%f %f" , &flo1 , &flo2);
    
    printf("%d %d\n" , num1+num2 , num1-num2);
    printf("%0.1f %0.1f\n" , flo1+flo2 , flo1-flo2);
    return 0;

}