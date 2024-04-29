#include<stdio.h>
int main(){
    //Test Case
int t;
scanf("%d",&t);
while(t--){
    //size of array
int n;
scanf("%d",&n);
//array decleration
int arr[10000];
//taking input
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
//Search element
int search;
scanf("%d",&search);

int status=0;


for(int i=0;i<n;i++){
    if(arr[i]==search){
        status++;
    }
}
if(status>0){
    printf("YES\n");
}else{
    printf("NO\n");
}

}



    return 0;
}