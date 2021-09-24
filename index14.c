#include<stdio.h>

void crt(char *name){
    char *c = name;
    while (*c!='\0')
    {
        *c -=1;
        c++;
    }
    
}


int main(){
    char name[] = "Ifmmp!nz!obnf!jt!Bejuzb";
    crt(name);
    printf("%s" , name);
    return 0;

}