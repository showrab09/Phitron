#include<stdio.h>
void fun(int * num,int n,int index){
if(index>=n) return;
fun(num,n,index+2);
printf("%d ",num[index]);
}

int main(){
int n;
scanf("%d",&n);
int num[n];
for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
}
fun(num,n,0);
    return 0;
}