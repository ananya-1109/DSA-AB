#include<stdio.h>
#include<stdlib.h>

int A[10]={8,9,4,7,6,3,10,5,14,2};
int size=10;
int length=10;

int LinearSearch(int key){
    for(int i=0;i<length;i++){
        if(key==A[i]){
            return i;
        }
    }
      return -1;
}

int main(){
    int key;
    printf("the array is:");
    for(int i=0;i<length;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

    printf("enter the key to be searched:",key);
    scanf("%d",&key);
   int x= LinearSearch(key);
   printf("%d",x);

   return 0;
}
