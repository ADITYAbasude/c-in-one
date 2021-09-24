#include <stdio.h>
#include <string.h>
int main()
{
    char orignal[100];
    char fake[100];
    printf("Enter a name : ");
    gets(orignal);
    strcpy(fake , orignal);
    strrev(orignal);



    if ((strcmp(orignal,fake))==0 )
    {
        printf("%s is a palindrome string" , fake);
    }
    else 
    {
        printf("%s is not a palindrome string" , fake);
    }

    // printf("%s" , name_taked);
    return 0;
}