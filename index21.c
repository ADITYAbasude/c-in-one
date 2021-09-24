#include <stdio.h>

int main()
{
    char vowel;
    printf("Enter a character : ");
    scanf("%c", &vowel);

    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
     {
        printf("%c is a vowel", vowel);
    }
    else
    {
        printf("%c is a consonants", vowel);
    }

    return 0;
}