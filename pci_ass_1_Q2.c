#include<stdio.h>

int main(){
    float rad_num , area, vol;
    printf("Enter  a radius = ");
    scanf("%f" , &rad_num);

    area = 4*3.14*rad_num*rad_num;
    printf("Area of shere : %f \n", area);

    vol = (4/3.0)*3.14*rad_num*rad_num*rad_num;
    printf("Volume of sphere : %f", vol);



    return 0;

}