#include<stdio.h>
int main(){
int row,col;
scanf("%d %d",&row,&col);
int jadu[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&jadu[i][j]);
    }
}
int count=1;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==j || (i+j)==(row-1)){
            if(jadu[i][j]!=1){
            count=0;
            }
           continue;
        }
        if(jadu[i][j]!=0){
        count=0;
       }
    }
}

if(row!=col || count==0){
    printf("NO");
}
else{
    printf("YES");
    };


    return 0;
}