#include<stdio.h>

int main(){
    
    int num1,num2,post_i,pre_i,post_d,pre_d;



    // this is for increment number
    printf("Enter your value for Increment : ");   //enter your number
    scanf("%d" , &num1);
    post_i = num1++;
    pre_i = ++num1;
    printf("Post Incremented value : %d \nPre Incremented value : %d \n" ,  post_i , pre_i); // this is your result


    // this is for Decrement number
    printf("Enter your value for Decrement : ");
    scanf("%d" , &num2);
    post_d = num2--;
    pre_d = --num2;
    printf("Post Decremented value %d \nPre Decremented value %d" , post_d , pre_d);  // this is your result


    return 0;

}