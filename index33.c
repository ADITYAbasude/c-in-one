#include<stdio.h>

int main(){
    int from , to , sum;
    printf("Table from : ");
    scanf("%d" , &from);
    printf("To : " );
    scanf("%d" , &to);

    for (from; from <= to ; from++)
    {
        for (int i = 0; i <= 10; i++)
        {
            sum = from*i;
            printf("%d x %d = %d\n" , from , i , sum);
        }
        printf("\n");
        // printf("\n %d" , from);


    }
    
    return 0;

}