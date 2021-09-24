#include<stdio.h>
#include<string.h>



int main(){
    char ch ,s[1000], sen[1000];
    scanf("%c" , &ch);
    scanf("%s" , &s);
    gets(sen);

    printf("%c\n" , ch);
    printf("%s\n" , s);
    // printf("%s" , sen);
    puts(sen);
    return 0;

}