#include<stdio.h>
#include<windows.h>

int main(){
    char a = 177 , b = 219;
    printf("\t\t");
    for (int i = 0; i < 1; i++)
    {
        printf("%c" , a);
        printf("\r");
        printf("\t\t");
        for (int i = 0; i < 20; i++)
        {
            printf("%c" ,b);
            sleep(1);
        }
        
    }
    printf("done");
    
    return 0;

}