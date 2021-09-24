
#include <stdio.h>

int main()
{
    int l, num, arr[1000];

    scanf("%d", &num);
    // l = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = num - 1; i >= 0; i--)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}