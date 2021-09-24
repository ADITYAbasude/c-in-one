#include<stdio.h>
#include<math.h>

int main(){
    int take_num;
    scanf("%d" , &take_num);
    int sum;
    sum = sqrt(15);
    printf("%d", sum);
    switch (take_num){
    case 15 :
        printf("hello world");
        break;

    
    default:
        printf("bye");
        break;
    }
    printf("\nhow are you");
    return 0;

}