#include <stdio.h>

int main()
{
    int a[10], temp;
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter a number %d :  ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}