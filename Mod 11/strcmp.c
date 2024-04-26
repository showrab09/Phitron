#include<stdio.h>
#include<string.h>
int main(){

char a[100],b[100];
scanf("%s %s",a,b);
int value = strcmp(a,b); //built in function
//-1 means 2nd is bigger
//1 means 1st is bigger
//0 means smae
if(value==0){
printf("Same Shit");
}
else if(value==1){
    printf("1st string is bigger");
}
else{
    printf("2nd is bigger");
}




    return 0;
}