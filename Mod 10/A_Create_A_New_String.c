#include<stdio.h>
#include<string.h>
int main(){
char name1[1000];
char name2[1000];
scanf("%s %s",name1,name2);

int stl1=strlen(name1);
int stl2=strlen(name2);
printf("%d %d\n%s %s",stl1,stl2,name1,name2);

    return 0;
}