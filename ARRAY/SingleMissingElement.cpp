#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[12]={1,2,3,4,5,6,8,9,10,11,12};
int size=12;
int length=12;

void MissingElement(int A[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i];
    }
    int s=n*(n+1)/2;
    s-sum;
    printf("%d ",s-sum);
}

int main(){
    cout<<"the missing element is:";
    MissingElement(A,length);

    return 0;
}
