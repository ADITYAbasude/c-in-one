#include<stdio.h>

int main(){

    int arr[3][3] = { {1,2,3},
                      {4,5,6}, 
                      {7,8,9} };

    int sum =  arr[1][1];
    printf("%d" , sum);

    return 0;

}