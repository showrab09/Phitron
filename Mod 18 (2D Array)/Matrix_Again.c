#include<stdio.h>
int main(){
int row,col;
scanf("%d %d",&row,&col);
int arr[row][col];
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}
int x=row-1;

scanf("%d",&x);
//print specific row
for(int i=0;i<col;i++){
    printf("%d ",arr[x][i]);
}
printf("\n");
int y=col-1;
//print specific column
for(int i=0;i<row;i++){
    printf("%d ",arr[i][y]);
}

    return 0;
}