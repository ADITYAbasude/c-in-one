#include <stdio.h>

char occ(char name[], char c)
{
    char *prt = name;

    // int i = 0;
    while (*prt != '\0')
    {
        if (*prt == c)
        {
            // i++;
            return printf("your char is match to string");
        }
        else if (*prt != c)
        {
            prt++;
            return printf("Your char value is not mathing ");
        }

        prt++;
    }
}

int main()
{
    char name[] = "MAM";

    printf("%s", occ(name, 'A'));
    return 0;
}