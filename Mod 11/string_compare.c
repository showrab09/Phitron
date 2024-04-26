#include<stdio.h>
int main(){

char a[100],b[100];
scanf("%s %s",a,b);
int i=0;
while(1){
    if(a[i]=='\0'&&b[i]=='\0'){
        printf("Same");
        break;
    }else if(a[i]=='\0'){
        printf("String b is bigger");
        break;
    }else if(b[i]=='\0'){
        printf("String a is bigger");
        break;
    }

    if(a[i]==b[i]){
        i++;
    }
    else if(a[i]<b[i]){
        printf("string b is bigger");
        break;
    }
    else{
        printf("string A is bigger");
        break;
    }

}

    return 0;
}