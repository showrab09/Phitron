#include<stdio.h>
int main(){



char name[5];
//taking input for array
for(int i=0;i<5;i++){
    scanf("%c",&name[i]);
}

//printing output for array
for(int i=0;i<5;i++){
    printf("%c",name[i]);
}
printf("\n%d",sizeof(name));
    return 0;
}