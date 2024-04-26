#include<stdio.h>
#include<string.h>
int main(){

int a[100],b[100];
scanf("%s %s",a,b);
strcpy(b,a); //copying one elemetns to other
printf("%s %s",a,b);

    return 0;
}