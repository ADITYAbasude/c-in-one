#include<stdio.h>
#include<string.h>
int main(){
    int takeNum , space , dublicat;
    printf("How many rows you want to print : ");
    scanf("%d" , &takeNum);
    space = takeNum;
    printf("Enter a number : ");
    scanf("%d" , &dublicat);


    for (int i = 0; i < takeNum; i++)
    {
        for (int z = 0; z <= space-1; z++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("%d  " , dublicat++);
        }
        space--;
        printf("\n");
        
    }
    

    return 0;

}

