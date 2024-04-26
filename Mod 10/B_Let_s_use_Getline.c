#include<stdio.h>
#include<string.h>
int main(){
char strng[1000000];
gets(strng);



for(int i=0; strng[i]!='\\';i++){
 printf("%c",strng[i]);
}


    return 0;
}