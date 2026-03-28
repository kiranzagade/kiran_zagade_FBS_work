// Write a program to accept string from user and replace one character
// from special symbol.

#include<stdio.h>
#include<string.h>
void main(){
    char c,r;
    char str[100];
    printf("Enter a string ");
    scanf("%[^\n]",str);
    printf("Eter a character to replace ");
    scanf(" %c",&c);
    printf("Eter a character to replace with ");
    scanf(" %c",&r);
    

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            str[i]=r;
            break;
        }
    }
    printf("%s",str);

}