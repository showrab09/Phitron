#include<stdio.h>
int sum(int x,int y){
int s =x+y;
return s;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
int total=sum(x,y);
printf("The total is : %d",total);


    return 0;
}