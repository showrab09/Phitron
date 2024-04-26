#include<stdio.h>
#include<string.h>
int main(){

char string[1000000];
gets(string);

int sum=0;
for(int i=0;i<strlen(string);i++){
    int strToint=string[i]-48; // string value to Integer
    sum=sum+strToint;
    
}
printf("%d",sum);
    return 0;
}