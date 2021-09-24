#include<stdio.h>


int main(){
    int first = 0 , scecond = 1 , third=0 ;
    int term;
    printf("Enter a number : ");
    scanf("%d" , &term);
    for (int i = 0; i < term; i++)
    {
        third = first + scecond;
        printf("%d\n" , third);
        first = scecond;
        scecond = third;
    }
    

    return 0;

}