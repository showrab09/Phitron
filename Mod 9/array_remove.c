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
int pos;
scanf("%d",&pos);
for(int i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];
}

//printing output for array
for(int i=0;i<n-1;i++){
    printf("%d  ",arr[i]);
}

    return 0;
}