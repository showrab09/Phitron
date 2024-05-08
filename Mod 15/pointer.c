#include<stdio.h>
int main(){

int x=100;

int * ptr = &x;

printf("The address of x %p\n",&x);
printf("The Value of ptr %p\n",ptr);
printf("The address of ptr %p\n",&ptr);
printf("The value that hold of x %d",*ptr);//dereference


    return 0;
}