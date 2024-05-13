#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
//for upper triangle
int leaf=5+((n+1)/2);
int s=leaf-1,f=1;
for(int i=0;i<leaf;i++){
    for(int j=0;j<s;j++){
        printf(" ");
    }
     for(int j=1;j<=f;j++){
        printf("*");
    }
    s--;
    f+=2;
    printf("\n");
    
}
// for lower tree
for(int i=1;i<=5;i++){
    for(int j=0;j<5;j++){
        printf(" ");
    }
    for(int j=1;j<=n;j++){
        printf("*");
    }
    printf("\n");
    
}

    return 0;
}