#include<stdio.h>
 int count_before_one(int * p,int n){
    int count=0;
for (int i=0;i<n;i++){
    if(p[i]!=1){
        count++;
    }else{
        break;
    }
}
return count;
 }

int main(){
    int n;
    scanf("%d",&n);

    int numbers[n];
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }

int answer= count_before_one(&numbers,n);

printf("%d",answer);
    return 0;
}