#include <stdio.h>

int recursion(int num, int a, int b, int c)
{
    int x = a + b + c;
    if (num == 1)
    {
        return 1;
    }
    else if (num == 2)
    {
        return 2;
    }
    else if (num == 3)
    {
        return 3;
    }

    else if (num > 4)
    {
        return recursion(--num, b, c, a + b + c);
    }
    return x;
}

int main()
{
    int num, x, y, z, sum;
    scanf("%d", &num);
    scanf("%d %d %d", &x, &y, &z);
    sum = recursion(num, x, y, z);
    printf("%d", sum);

    return 0;
}