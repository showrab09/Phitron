#include<stdio.h>
int main(){

int n,k;
//size of array
scanf("%d %d",&k,&n);

for(int j=1;j<=k;j++){
for(int i=1;i<=n;i++){
    printf("%d ",i);
}
printf("\n");
}
    return 0;
}