#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[5]={1,2,3,4,5};
int size=5;
int length=5;

void reverse(){
    int B[length];
    for(int i=length-1,j=0;i>=0,j<length;i--,j++){
        B[j]=A[i];
    }
    for(int i=0;i<length;i++){
        A[i]=B[i];
    }
}

void reverse2(){
    for(int i=0,j=length-1;i<j;i++,j--){
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}

int main(){
    cout<<"original array:";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<"reversed array:";
    reverse();
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }    
    cout<<endl;

    cout<<"reversing by swapping:";
    reverse2();
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }    


    return 0;
}
