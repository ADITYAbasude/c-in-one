#include<stdio.h>
#include<string.h>

int main(){
    int arr[100000] , num , find;


    scanf("%d" , &num);
    for (int i = 0; i < num; i++) {

        scanf("%d" , &arr[i]);
    }
    
    scanf("%d" , &find);
    for (int j; j<num; j++) {
        if (arr[find] == arr[j]) {
            
            printf("Yes");        
        }
        
    }

    printf("No");
    return 0;
}