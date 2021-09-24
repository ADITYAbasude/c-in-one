#include <stdio.h>
void table(int *num, int *num2)
{
    for (*num <= *num2; *num++;)
    {
        printf("%d\n" , *num);
        for (int i = 0; i <= 10; i++)
        {
            int sum = ((*num) * (i));
            printf("%d x %d = %d\n", *num, i, sum);
        }
        printf("\n\n\n\n");
    }
}

int main()
{
    int num , num2;
    printf("Enter a number : ");
    scanf("%d", &num);
    scanf("%d", &num2);
    table(&num , &num2);
    // printf("%d" , sum);
    return 0;
}