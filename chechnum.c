#include<stdio.h>

int main(){
    int a;
    printf("Enter the value : \n");
    scanf("%d" , &a);

    if (a <0){
        printf("Youe number is nagitive");
    }
    else if(a>=0){
        printf("Your number is positive");

    }
    
    return 0;
}