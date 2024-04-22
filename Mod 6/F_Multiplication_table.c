#include<stdio.h>
int main(){

int num ;
scanf("%d",&num);

for (int i=1;i<=12;i++){
    int answer=num*i;
    printf("%d * %d = %d\n",num,i,answer);
}

    return 0;
}