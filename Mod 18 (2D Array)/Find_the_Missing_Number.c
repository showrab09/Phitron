#include<stdio.h>
int main(){
int testc;
scanf("%d",&testc);
for(int i=1;i<=testc;i++){
long long int x,a,b,c,d;
scanf("%lld %lld %lld %lld",&x,&a,&b,&c);

if(x%(a*b*c)==0){
    d=x/(a*b*c);
    printf("%lld",d);
}
else{
    printf("-1");
}
printf("\n");
}

    return 0;
}