#include<stdio.h>
void fun(int*p){
    printf("Passed address %p\n",p);
    *p=1000; // dereference kore change

}




int main(){
int x= 100;
int * ptr=&x;
printf("Address %p\n",ptr);
printf("Address %p\n",&x);
fun(&x);
printf("New value %d",x);


    return 0;
}