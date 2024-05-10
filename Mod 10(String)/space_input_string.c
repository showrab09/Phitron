#include<stdio.h>
#include<string.h>
int main(){

char name[100];
//gets(name); //take string with spaces
fgets(name,20,stdin);

printf("%s",name);
    return 0;
}