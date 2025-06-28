#include<stdio.h>
int main(){
int i;
int arr[7]={0,1,2,3,4,5,6};
int find=8;
int index=-1;
for(int i=0;i<=5;i++){
    if(arr[i]==find){
        index=i;
    }
    printf("%d \n",i);
}
}
