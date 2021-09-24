#include<stdio.h>
struct person
{
    int age;
    float wight;
};



int main(){
    struct person , *personPtr , pl;
    personPtr = &pl;
    printf("Enter your age : ");
    scanf("%d" , personPtr->age);
    printf("Enter your wight : ");
    scanf("%d" , personPtr->wight);

    printf("Your age is : %d", personPtr->age);
    printf("Your age is : %d", personPtr->wight);
    return 0;

}