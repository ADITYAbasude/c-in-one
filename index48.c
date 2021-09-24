#include <stdio.h>
#include<string.h>

int main()
{
    char *s;
    int l;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    l = strlen(s);
    for (int i = 0; i<l; i++)
    {
        printf("%c" , s[i]);
        if (s[i] == ' ')
        {
            printf("\n");
        }
    }

    printf("%s", s);
    return 0;
}