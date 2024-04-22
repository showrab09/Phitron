#include<stdio.h>
int main(){


//array 1
int a;
scanf("%d",&a);
int arr[a];
//taking input for array
for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
}




//array 2
int b;
scanf("%d",&b);
int arrr[b];
//taking input for array 2
for(int i=0;i<b;i++){
    scanf("%d",&arrr[i]);
}


//New Array
int c=a+b;
int newArray[c];

//entering first array value to new array
for(int i=0;i<c;i++){
newArray[i]=arr[i];
}
//entering 2nd array value to new array
int x=a;
for(int i=0;i<b;i++){
    newArray[x]=arrr[i];
    x++;
}
//printing the full array
for(int i=0;i<c;i++){
    printf("%d  ",newArray[i]);
}
    return 0;
}