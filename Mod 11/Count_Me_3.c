#include<stdio.h>
#include<string.h>
int main(){

int t;
scanf("%d",&t);

while(t--){
char names[10001];
scanf("%s", names);

int capCount=0,smaCount=0,digCount=0;

for(int i=0;i<strlen(names);i++){
if(names[i]>='A' && names[i]<='Z'){
    capCount++;
}else if(names[i]>='a' && names[i]<='z'){
    smaCount++;
}else if(names[i]>='0' && names[i]<='9'){
    digCount++;
}
}

printf("%d %d %d\n",capCount,smaCount,digCount);
}



    return 0;
}