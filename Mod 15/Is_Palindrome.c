#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
    int length= strlen(str);
    
   int len=length-1;
for(int i=0;i<length/2;i++){

    if(str[i] != str[len]){
     return 0;
    } 
    len--;
}
 return 1;
}


int main(){

char str[1000];
scanf("%s",str);

int answer = is_palindrome(str);
if(answer==1){
    printf("Palindrome");
}else{
    printf("Not Palindrome");
}
    return 0;
}