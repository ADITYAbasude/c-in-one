#include<stdio.h>

int main(){
    int num = 1 , m=4;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= m-1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i ; k++)
        {
            printf("%d " , num++);
        }
        m--;
        printf("\n");
        
        
    }
    

    return 0;

}