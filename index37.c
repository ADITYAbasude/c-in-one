#include<stdio.h>

int main(){
    FILE *p;
    int a;
    // p = fopen("aditya.txt" , "w");
    p = fopen("aditya.txt" , "r");
    fscanf(p ,  "%d" , "&d");
    printf("%d" , a);
    return 0;

}