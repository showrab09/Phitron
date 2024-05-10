#include<stdio.h>
void fun(int n){
    if(n==0)return;
    int x=n%10; //vagshesh bore kore rekhechi
    fun(n/10); // last digit ber kore vagfol abar pathacchi
    printf("%d ",x);
}

int main(){
int test;
scanf("%d",&test);
for(int i=1;i<=test;i++){
    int x;
scanf("%d",&x);
fun(x);
printf("\n");
}
    return 0;
}

