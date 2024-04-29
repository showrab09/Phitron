#include<stdio.h>
int main(){

int t;
scanf("%d",&t);

while (t--)
{
  int m1,m2,d;
  scanf("%d %d %d",&m1,&m2,&d);
  int m3= (m1*d)/(m1+m2);
int few=d-m3;
printf("%d\n",few);
}








    return 0;
}