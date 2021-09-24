#include<stdio.h>
#include<string.h>

struct emp{
    int roll;
    char name[10];
    float salary;

}e1[10];


int main(){
    // struct emp e1;
    
    // e1.roll = 1;
    // strcpy(e1.name , "Aditya");
    // e1.salary = 50000;

    // printf("%d\n" , e1.roll);
    // printf("%1.1f\n" , e1.salary);
    // printf("%s" , e1.name);

    for (int i = 0; i < 10; i++)
    {
        printf("Enter your name : ");
        scanf("%s" , &e1[i].name);
        
        printf("Enter your rollno : ");
        scanf("%d" , &e1[i].roll);
        
        printf("Enter your salary : ");
        scanf("%1.1f" , &e1[i].salary);

        
    }
    

    return 0;

}