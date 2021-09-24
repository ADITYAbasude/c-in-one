#include<stdio.h>

int main(){
    int x = 20;
    int *ptr = &x;
    // printf("%u \n" , ptr);
    // ptr += 1;
    // printf("%u \n" , ptr);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n" , ptr);
        ptr+= 10;
    }
    

    return 0;

}