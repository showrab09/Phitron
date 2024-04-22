#include<stdio.h>
int main(){

int total;
int num;
int biggest=0;
scanf("%d",&total);

for(int i=1; i<=total;i++){
    scanf("%d",&num);
    if(num>biggest){
        biggest=num;
        
    }
 
  
}

   printf("%d",biggest);

    return 0;
}