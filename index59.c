#include <stdio.h>
// #include <stdlib.h>

// void scanArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", (arr + i));
//     }
// }

int deletion(int arr[], int size, int index)
{

    for (int i = index-1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // arr[index] = element;
    // return 1;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5}, index, size = 5;
    // size = sizeof(arr[0]) / sizeof(int);
    printf("Select index : ");
    scanf("%d", &index);
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}