#include <stdio.h>

int main()
{
    int star;
    printf("Enter how many star you want to print : ");
    scanf("%d", &star);
    // char star = 'a';
    for (int i = 0; i <= star; i++)
    {

        for (int k = 0; k <= star; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int j = 0; j < star; j++)
    {

        for (int i = 0; i < star * 2; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i <= star; i++)
    {

        for (int k = 0; k <= star; k++)
        {
            printf(" ");
        }

        for (int j = star; j >= 0; j--)
        {
            printf("* ");
        }
        

        printf("\n");
    }
    


    return 0;
}