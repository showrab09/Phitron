#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int numbers[100000];
for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
}
int div2=0,div3=0;
for(int i=0;i<n;i++){
if(numbers[i]%2==0){
    div2++;
}
else if(numbers[i]%3==0 && numbers[i]%2!=0){
    div3++;
}
   
}

 printf("%d %d",div2,div3);
    return 0;
}