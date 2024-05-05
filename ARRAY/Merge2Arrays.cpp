#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[5]={1,4,6,8,9};
int sizeA=5;
int lengthA=5;

int B[5]={2,3,5,7,11};
int sizeB=5;
int lengthB=5;

void merge(int A[],int B[],int C[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    for(;i<m;i++){
        C[k++]=A[i];
    }
    for(;j<m;j++){
        C[k++]=B[j];
    }
}
int main(){
    int x=lengthA+lengthB;
    int C[x];
    cout<<"the merged array is:";
    merge(A,B,C,lengthA,lengthB);
    for(int i=0;i<x;i++){
        cout<<C[i]<<" ";
    }

    return 0;
}
