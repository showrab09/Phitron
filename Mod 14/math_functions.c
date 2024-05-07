#include<stdio.h>
#include<math.h>
int main(){

double x;
scanf("%lf",&x);
int cl=ceil(x);
int fl=floor(x);
int rnd=round(x);
double sqr=sqrt(x);
int pw=pow(x,x);
printf("%d",pw);

    return 0;
}