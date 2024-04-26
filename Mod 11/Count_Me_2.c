#include<stdio.h>
#include<string.h>
int main(){
char string[100000];
scanf("%s",string);
int count=0;
for(int i=0;i<strlen(string);i++){
if(string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u'){
    count++;
}
}
printf("%d",count);


    return 0;
}