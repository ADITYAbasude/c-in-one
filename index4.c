#include<stdio.h>

int arr_take(int table){
    for (int i = 0; i <= 10; i++)
    {   
        int sum = i*table;
        printf("%d x %d = %d\n" , table,  i , sum);
    }
    
}

int main(){
    int tabel;
    printf("Which table you want to print : ");
    scanf("%d" , &tabel);

    arr_take(tabel);

    return 0;

}