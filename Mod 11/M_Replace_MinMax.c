#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
//taking input
int numbers[1000];
for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
}

int big=numbers[0];
int small=numbers[0];
int big_ind;
int small_ind;

for(int i=0;i<n;i++){
if(big<numbers[i]){
    big=numbers[i];
   big_ind=i;
}
if(small>numbers[i]){
    small=numbers[i];
    small_ind=i;
}

}
int temp= numbers[big_ind];
numbers[big_ind]=numbers[small_ind];
numbers[small_ind]=temp;

for(int i=0; i<n;i++){
    printf("%d ",numbers[i]);
}
 return 0;
}