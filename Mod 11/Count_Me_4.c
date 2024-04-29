#include<stdio.h>
#include<string.h>
int main(){

char name[10001];
scanf("%s",name);
int str[26]={0};
for(int i=0;i<strlen(name);i++){
    int value=name[i]-97;
str[value]++;
}
for(int i=0;i<26;i++){
    if(str[i]>0){
printf("%c - %d\n",i+97,str[i]);
    }
}
    return 0;
}   