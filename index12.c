#include<stdio.h>


int fact( int i){
    if (i<= 1)
    {
        return 1;
    }
    return i*fact(i-1);
    
}


int main(){
    
    int i = 7;
    printf("Fortorial of %d id %d\n" , i , fact(i));

    

    return 0;

}