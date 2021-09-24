#include <stdio.h>

int main()
{
    int num , sum=0,m;
    printf("Enter a number : ");
    scanf("%d" , &num);
    while (num>0)
    {
        m = num%10;
        sum += m;
        num /= 10;

    }
    printf("\n Sum = %d" , sum);
    
    return 0;
}