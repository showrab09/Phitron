#include<stdio.h>
int main(){
int testc;
scanf("%d",&testc);
for(int i=1;i<=testc;i++){
int n;
scanf("%d",&n);
char result[n];
scanf("%s",&result);
int tiger=0,pathaan=0;
for(int i=0;i<n;i++){
    if(result[i]=='T'){
        tiger++;
    }
    else{
        pathaan++;
    }
}
if(tiger>pathaan){
    printf("Tiger");
}else if(pathaan>tiger){
    printf("Pathaan");
}else if(tiger==pathaan){
    printf("Draw");
}
printf("\n");
}

    return 0;
}