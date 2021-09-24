#include<stdio.h>


int main(){
    int arr[5][2] = {
        {1,2},
        {2,3},
        {3,4},
        {4,5},
        {5,6}
    };



    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d] [%d] = %d\n" ,i,j, arr[i][j]);
        }
        
    }
    return 0;
    

}