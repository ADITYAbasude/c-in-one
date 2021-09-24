#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num ;
    srand(time(0));
    num = rand()%100 + 1;
    // printf("gasses number is : %d \n" , num);


    int gass ;
    int nds = 1;
    printf("Enter a value between 1 to 100\n");
    do{
        scanf("%d", &gass);

        if (gass<num){
            printf("pls enter a greater value \n ");
            // break;
        }
        else if (gass>num){
            printf("pls enter a lower value \n ");
            // break;
        }
        else{
            printf("You are gassed in attemp %d" , nds);
        }
        nds++;
        

    }while(gass!=num);
    
    return 0;

}