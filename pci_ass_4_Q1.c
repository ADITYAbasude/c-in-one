#include<stdio.h>

int main(){
    int l , b , pri , r_area;   // variables 
    float pi = 3.14;
    float r  , cir , c_area;


    // claculation of rectangle
    printf("Enter a lenght of rectangle : ");
    scanf("%d" ,&l);
    printf("Enter a breadth of rectangle : ");
    scanf("%d" , &b );
    r_area = l*b;
    pri = 2 *(l+b);
    printf("Area of rectangle is : %d \nPerimeter of rectangle is : %d\n" , r_area , pri);

    // calculation of circle
    printf("Enter the radius of circle : ");
    scanf("%f" , &r);
    c_area = pi*r*r;
    cir = 2*pi*r;


    printf("Area of circle is : %f \n Circumference of circle is : %f" , c_area , cir);



    return 0;

}