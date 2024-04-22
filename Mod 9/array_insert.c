#include<stdio.h>
int main(){

int n;
//size of array
scanf("%d",&n);

int arr[n+1];
//taking input for array
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
//shifting index values
int index,value;
scanf("%d %d",&index,&value);
 
for(int i=n; i>=index+1;i--){
    arr[i]=arr[i-1];
}
arr[index-1]=value;

//printing output for array
for(int i=0;i<=n;i++){
    printf("%d  ",arr[i]);
}

    return 0;
}