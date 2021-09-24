#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    printf("Matrix A \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a value [%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Matrix B \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a value [%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Your answer is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}