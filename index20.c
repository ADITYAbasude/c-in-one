#include<stdio.h>

int main(){
    int num_1,num_2,num_3;
    printf("Enter number one : ");
    scanf("%d" , &num_1);
    
    printf("Enter number two : ");
    scanf("%d" , &num_2);
    
    printf("Enter number three : ");
    scanf("%d" , &num_3);

    if (num_1>num_2 && num_1>num_3){
        printf("%d is grater number" , num_1);
    }
    
    else if (num_1<num_2 && num_2>num_3){
        printf("%d is grater number" , num_2);
    }
    
    else if (num_3>num_1 && num_3>num_2){
        printf("%d is grater number" , num_3);
    }
   
    
    return 0;

}