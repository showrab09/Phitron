#include<stdio.h>
void fun(int *arr ,int n){
arr[1]=200; //dereferencing
}



int main(){
int arr[5]={10,20,30,40,50};
fun(arr,5); //passing the array and size
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}

    return 0;
}