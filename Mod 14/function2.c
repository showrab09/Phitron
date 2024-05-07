#include<stdio.h>
int sum(){
    int x,y;
    scanf("%d %d",&x,&y);

    int s=x+y;
    return s;
}

int main(){
int total = sum();
printf("%d",total);


    return 0;
}