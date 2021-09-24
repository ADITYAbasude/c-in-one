#include <stdio.h>

int main()
{

    int n = 0;
    
    while (n<10)
    {
        int a, b, c;

        printf("Enter the value and see the grater number\n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a > b && a > c)
        {
            printf("int a is greter value than b and c\n");
            // break;
        }
        if (b > a && b > c)
        {
            printf("int b is greter value than a and c\n");
            // break;
        }
        if (c > b && a < c)
        {
            printf("int c is greter value than a and b\n");
            // break;
        }
        // else
        // {
        //     printf("opps! Sorry , we not undedrstood what you saying ......\n");
        // }
        n++;
    }
    return 0;
    
}
