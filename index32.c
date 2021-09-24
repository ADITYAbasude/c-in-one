#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int num;
    while (num != 45)
    {
        srand(time(0));
        num = rand() % 100 + 1;
        printf("%d\n", num);
        
    }
    printf("Your WiFi is hacked");

    return 0;
}