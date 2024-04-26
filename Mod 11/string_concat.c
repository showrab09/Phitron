//addition of string
#include<stdio.h>
#include<string.h>
//strcat(a,b); shortcut method
int main(){

char a[100],b[100];
scanf("%s %s",a,b);
int size_a = strlen(a);
int new_size=strlen(a)+strlen(b);


int j=0;
for(int i=size_a; i<=new_size;i++){
    a[i]=b[j];
    j++;
}


printf("%s",a);
    return 0;
}