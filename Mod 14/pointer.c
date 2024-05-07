#include<stdio.h>
int main(){

int x=10;
printf("%p\n",&x);

//pointer
int * p=&x;
printf("%p\n",p);

//dereference
printf("%d\n",*p);

//mew value assign throug p

*p=5000;
printf("%d",x);


    return 0;
}