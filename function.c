#include<stdio.h>


int display(int a  ,  int b){
    return a*b;
}

int main(){

    printf("hello world\n");
    int num1 = 4;
    int num2 = 6;
    int c = display(num1 , num2);
    printf("your value is %d " , c);
    return 0;

}