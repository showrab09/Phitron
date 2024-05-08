#include<stdio.h>

void fun(int x){
printf("Address of fun x %p\n",&x);
}

int main(){
int x=10;
fun(x);
printf("Address of main x %p\n",&x);


    return 0;
}