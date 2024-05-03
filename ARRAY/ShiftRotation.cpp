#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[5]={1,2,3,4,5};
int size=5;
int length=5;

void LeftShiftRotate(){
    int B[length];
    for(int i=1,j=0;i<length;i++,j++){
        B[j]=A[i];
    }
    B[length-1]=A[0];

    for(int i=0;i<length;i++){
        A[i]=B[i];
    }
}

void RightShiftRotate(){
    int B[length];
    for(int i=0,j=1;i<length-1;i++,j++){
        B[j]=A[i];
    }
    B[0]=A[length-1];

   for(int i=0;i<length;i++){
        A[i]=B[i];
    }  
}
int main(){
    cout<<"original array:";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<" left shifted and left rotated array:";
    LeftShiftRotate();
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<" right shifted and right rotated array:";
    RightShiftRotate();
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
