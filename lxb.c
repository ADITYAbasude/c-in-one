#include<stdio.h>



int multiply(int a  , int b){
    return a*b;
}

int main(){
    int length;
    int breath;
    printf("Enter your length : ");
    scanf("%d" , &length);
    printf("Enter your breath : ");
    scanf("%d" , &breath);
    int c = multiply(length, breath);
    printf("Your answer is : %d sq cm" ,c);
    return 0;

}
