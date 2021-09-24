#include <stdio.h>

int main()
{
    // printf("Hello world");
    float sum1 = 1;
    float sum = 0;
    float sum3 = 1;
    float sum4 = 0;
    // int i;

    // for (int i = 0; i< 1000000;  i++)
    // {
    //     sum1 += 1;
    //     sum += 1;
    //     float total = sum1 / sum;
    //     printf("%1.1f / %1.1f = %1.3f\n", sum1, sum, total);

    //     if(total==1.61803398875){
    //         printf("Golden ratio");
    //         break;
    //     }

    // }

    float total;
    for (int i = 0; i < 100; i++)
    {
        sum1++;
        sum++;

        total += sum1+sum;
        float total2 = sum3/sum4;
        printf("%f\n" , total2);
    }
    
 
    
    return 0;
}