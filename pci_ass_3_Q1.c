#include<stdio.h>

int main(){
    

    float c,f ;   // Declare a variables
    
    printf("Enter temperature from Fahrenheit : ");
    scanf("%f" , &f);  // take a input from user

    c = (f-32)*5/9;  //Calculation
    printf("Temperature in Celsius valus is : %f" , c );    // your result
    return 0;

}