#include<stdio.h>
int main(){

int row,col;
scanf("%d %d",&row,&col);
int arr1[row][col];
int arr2[row][col];
int sum_arr[row][col];
//taking input of matrix
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr1[i][j]);
    }
}
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr2[i][j]);
    }
}


for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum_arr[i][j]=arr1[i][j]+arr2[i][j];
    }
}

for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d ",sum_arr[i][j]);
    }
    printf("\n");
}
    return 0;
}