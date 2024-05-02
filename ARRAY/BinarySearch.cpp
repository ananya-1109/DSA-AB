#include<stdio.h>
#include<stdlib.h>

int A[15]={4,8,10,15,18,21,24,27,29,33,34,37,39,41,43};
int length=15;

int BinarySearch(int key){
    int l,h,mid;
    l=0;
    h=length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
            return mid;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int key;
    printf("Enter the key to be searched:",key);
    scanf("%d",&key);
    int x = BinarySearch(key);
   if (x != -1){
        printf("The index of the searched key is: %d", x);
    }
    else{
        printf("Key not found");
    }

    return 0;
}
