#include <stdio.h>

int main()
{
    int takeNum;
    int arr[3][3];
    printf("Enter a number : ");
    scanf("%d", &takeNum);

    for (int i = 0; i < takeNum; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    for (int i = 0; i < takeNum; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }

    return 0;
}