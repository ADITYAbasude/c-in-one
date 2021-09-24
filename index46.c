#include <stdio.h>
#include<math.h>

void sum(int *x, int *y)
{
    int add , sub;
    add = *x + *y;
    sub = abs(*x - *y);
    printf("%d\n", add);
    printf("%d", sub);
}

int main()
{
    int x, y, point1, point2;
    scanf("%d %d", &x, &y);
    sum(&x, &y);
    return 0;
}