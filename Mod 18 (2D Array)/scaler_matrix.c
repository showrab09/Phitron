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
int counter=1;
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       if(i==j){
        if(arr[i][j]!=arr[0][0]){
            counter=0;
        }
        continue;
       } if(arr[i][j]!=0){
        counter=0;
       }
    }
    }
if(row!=col || counter==0){
    printf("Not scaler matrix");
}
else{
    printf("Scaler Matrix");
    };
    return 0;
}
//for secondary diagonal (i+j==row-1) or (i+j==col-1)