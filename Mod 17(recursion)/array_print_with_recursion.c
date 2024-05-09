#include<stdio.h>
//printing array value with recursion
void fun(int ar[],int n,int i){
if(i==n)return;
printf("%d " ,ar[i]);
fun(ar,n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
fun(number,n,0);


    return 0;
}