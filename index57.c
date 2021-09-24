#include <stdio.h>
#include <stdlib.h>

void scanArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
}

int insertion(int *arr, int size, int index, int element, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

void display(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int *arr, element, index, size;
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter a array size : ");
    scanf("%d", &size);
    if (size >= 100)
    {
        printf("Insertion is fail!");
        goto out;
    }

    scanArr(arr, size);

    printf("Select element and index : ");
    scanf("%d %d", &element, &index);
    insertion(arr, size, index, element, 100);
    size += 1;
    printf("Your insertion process is successfully!\n");
    display(arr, size);
out:
    return 0;
}