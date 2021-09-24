#include<stdio.h>

int main(){
    int reverse = 0 , rem, n;
    printf("Enter a number : ");
    scanf("%d" , &n);
    while (n!=0)
    {
        rem = n%10;
        reverse = reverse* 10+rem;
        n/=10;

    }
    printf("reversed number is : %d"  , reverse);
    

    return 0;

}