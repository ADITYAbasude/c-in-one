#include <stdio.h>

int main()
{
    int *arr, num, find, str[100];
    printf("Enter a range of array : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to find : ");
    scanf("%d", &find);
    for (int j; j < num; j++)
    {
        if (arr[find] == arr[j])
        {
            str[100] = "yes";
            printf("%s", str);
        }
    }
    str[100] = "No";
    printf("%d", str);
    return 0;
}