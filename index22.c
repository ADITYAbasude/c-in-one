#include<stdio.h>

int main(){
    int num;
    printf("Enter the nmber between 1 to 7 : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuseday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    
    default:
        printf("Enter a valid number");
        break;
    }

    return 0;

}