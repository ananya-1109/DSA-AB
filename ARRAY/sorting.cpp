#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[5]={45,32,67,45,100};
int size=5;
int length=5;

void sorting(){ 
    for(int j=0;j<length-1;j++){
    for(int i=0;i<length-1;i++){
        if(A[i]>A[i+1]){
            swap(A[i],A[i+1]);     
        }
    }
}
}

int main(){
    cout<<"original array:";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<"sorted array:";
    sorting();
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0; 
}
