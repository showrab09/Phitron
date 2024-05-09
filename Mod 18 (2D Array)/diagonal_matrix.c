#include<stdio.h>
int main(){

int row,col;
scanf("%d %d",&row,&col);
int arr[row][col];
//taking input of matrix
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}
int counter=0;
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       if(i==j){
        continue;
       }else if(arr[i][j]!=0){
        counter++;
       }
    }
    }
if(row!=col || counter>0){
    printf("Not diagonal");
}
else{
    printf("Diagonal");
    };
    return 0;
}
//for secondary diagonal (i+j==row-1) or (i+j==col-1)