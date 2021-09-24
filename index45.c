#include <stdio.h>

int filter(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (a < b && b > c && b > d)
    {
        return b;
    }
    else if (a < c && b < c && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int a, b, c, d , outPut;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    outPut = filter(a,b,c,d);
    printf("%d" , outPut);
    return 0;
}