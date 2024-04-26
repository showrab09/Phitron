#include<stdio.h>
int main(){

int n;
//size of array
scanf("%d",&n);

int arr[n];
//taking input for array
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

//printing output for array
int count[10]={0};

for(int i=0;i<n;i++){
 int value=arr[i];
 count[value]++;

}
for(int i=0;i<=10;i++){
   printf("%d - %d\n",i,arr[i]);
}
    return 0;
}