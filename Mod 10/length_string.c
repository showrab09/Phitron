#include<stdio.h>
#include<string.h>
int main(){
char name[100];
scanf("%s",name);

int count=0;

for(int i=0; name[i]!='\0'; i++){
    count++;
}

//by built in method
int st=strlen(name);


printf("%d",st);


    return 0;
}