#include<stdio.h>
#include<string.h>
int main(){

int n;
scanf("%d",&n);

char names[n][100];
for (int i=0;i<n;i++){
scanf("%s",&names[i]);
}


for (int i=0;i<n;i++){
if(strlen(names[i])<10){
    printf("%s\n",names[i]);
}
else{
    printf("%c %d %c",names[0],strlen(names)-2,names[0]);
}
}



    return 0;
}