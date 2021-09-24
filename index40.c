#include<stdio.h>
#include<string.h>



int main(){
    char ch ,s[1000], sen[1000];
    scanf("%c" , &ch);
    scanf("%s\n" , &s);
    scanf("%[^\n]s" , &sen);
    
    printf("%c" , ch);
    printf("\n%s" , s);
    printf("\n%s" , sen);
    
    
    return 0;

}
