#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[11]={6,7,8,9,11,12,15,16,17,18,19};
int size=11;
int length=11;

void MissingElement(int A[],int n){
    int i;
    int l=A[0];
    int h=A[length-1];
     int diff=l-0;
     for(i=0;i<n;i++){
        while(diff<A[i]-i){
            cout<<i+diff<<" ";
            diff++;
        }
     }
}

int main(){
    cout<<"the missing element is:";
    MissingElement(A,length);

    return 0;
}
