#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int*arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=4;i++){
    printf("enter the value at arr[%d] index\n",i);
    scanf("%d",&arr[i]);
    }
   for(int i=0;i<=4;i++){
       printf("%d",arr[i]);
   }
   int newsize;
   printf("\n eter the new size of array:");
   scanf("%d",&newsize);
   int*newarr=(int*)realloc(arr,newsize*sizeof(int));
   for(int i=n;i<newsize;i++){
       printf("\n enter the value at arr[%d]index",i);
       scanf("%d",&newarr[i]);
      
   }
   printf("\n all value in new array:");
   for(int i=0;i<newsize;i++){
       printf("%d",newarr[i]);
   }
    return 0;
}
