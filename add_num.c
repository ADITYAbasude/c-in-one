#include <stdio.h>

int main()
{
    

    int n;

    printf("Enter which table you want to print : ");
    scanf("%d", &n);                                      // enter the number of table

    for (int i = 0; i <= 10; i++)
    {
        int sum = n * i;
        printf("%d x %d = %d \n", n, i, sum);             // table is print
    }

    return 0;
}