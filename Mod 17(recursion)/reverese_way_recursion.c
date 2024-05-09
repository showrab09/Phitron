//print 10 to 1
#include<stdio.h>
void fun(int i){
    if(i==11)return;
    fun(i+1);  //calling funtion is first then we are returning 
    printf("%d ",i);
}


int main(){

fun(1);

    return 0;
}