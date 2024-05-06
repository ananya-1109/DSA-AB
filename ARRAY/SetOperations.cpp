#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[5]={3,4,5,6,10};
int sizeA=5;
int lengthA=5;

int B[5]={2,4,5,7,12};
int sizeB=5;
int lengthB=5;

void merge(int A[],int B[],int C[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else if(A[i]>B[j]){
            C[k++]=B[j++];
        }
        else{
            C[k++]=A[i++];
            j++;
        }
    }
    for(;i<m;i++){
        C[k++]=A[i];
    }
    for(;j<m;j++){
        C[k++]=B[j];
    }
}

void intersection(int A[],int B[],int C[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]>B[j]){
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            C[k++]=A[i++];
            j++;
        }
    }
}

void difference(int A[],int B[],int C[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else if(A[i]>B[j]){
            C[k++]=B[j++];
        }
        else{
            i++;
            j++;
        }
    }
}

int main(){
    int x=lengthA+lengthB;
    int C[x];
    int ch;
    cout<<"MENU\n";
    cout<<"1.UNION\n";
    cout<<"2.INTERSECTION\n";
    cout<<"3.DIFFERENCE\n";
    cout<<"4.EXIT\n";

    cout<<"Enter your choice:";
    cin>>ch;

    switch(ch){
        case 1: 
                
                cout<<"the union array is:";
                merge(A,B,C,lengthA,lengthB);
                for(int i=0;i<x;i++){
                    cout<<C[i]<<" ";
                }
                break;

        case 2: 
              
                cout<<"the intersected array is:";
                intersection(A,B,C,lengthA,lengthB);
                for(int i=0;i<x;i++){
                    cout<<C[i]<<" ";
                }
                break;

        case 3: 
            
                cout<<"the differentiated array is:";
                difference(A,B,C,lengthA,lengthB);
                for(int i=0;i<x;i++){
                    cout<<C[i]<<" ";
                }
                break;

    
}
    return 0;
}
