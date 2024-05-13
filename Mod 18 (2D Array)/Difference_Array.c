#include<stdio.h>
#include<stdlib.h>
int main(){
int testc;
scanf("%d",&testc);
for(int x=1;x<=testc;x++){
    int s;
scanf("%d",&s);
int a[s];
for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
}
int b[s];
for(int i=0;i<s;i++){
    b[i]=a[i];
}

    for(int i=0; i<s-1; i++) {
        for(int j=0; j<s-i-1;j++) {
            if(b[j] > b[j+1]) {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
int c[s];
for(int i=0;i<s;i++){
  c[i]=abs(a[i]-b[i]);
}

for(int i=0;i<s;i++){
  printf("%d ",c[i]);
}
printf("\n");
}
    return 0;
}