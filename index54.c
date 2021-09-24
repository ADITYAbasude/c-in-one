
#include <stdio.h>

struct box
{
    int height;
    int lenght;
    int width;
} b[100];

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %d", &b[i].lenght, &b[i].width, &b[i].height);
    }
    for (int i = 0; i < num; i++)
    {
        if (b[i].height < 41)
        {
            printf("%d\n", (b[i].lenght * b[i].width * b[i].height));
        }
    }

    return 0;
}