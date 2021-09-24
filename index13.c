#include <stdio.h>
#include <string.h>
int main()
{
    char orignal[20];
    char fake[20];
    gets(orignal);
    strcpy(fake , orignal);
    strrev(orignal);



    if ((strcmp(orignal,fake)) == 0)
    {
        printf("Same name");
    }
    else 
    {
        printf("Not a same name try another name");
    }

    // printf("%s" , name_taked);
    return 0;
}