#include<stdio.h>
void odd_even(){
    //taking size
int n;
scanf("%d",&n);
//taking input of array
int numbers[n];
for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
}
//counting even odd
   int even_count=0,odd_count=0;
for(int i=0;i<n;i++){
    if(numbers[i]%2==0){
        even_count++;
    }else{
        odd_count++;
    }
}
printf("%d %d ",even_count,odd_count);
}


int main(){

odd_even();

    return 0;
}
