#include<stdio.h>
#include<string.h>
int fun(int n){
  if(n==0){
    return 1;
  }
  int answer = fun(n-1);
  return answer*n;

    

}


int main(){
int n;
scanf("%d",&n);
int ans = fun(n);
 printf("%d\n",ans);
    return 0;
}