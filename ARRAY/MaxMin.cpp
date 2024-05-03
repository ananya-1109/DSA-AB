#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int size=15;
int length=15;

int max(){
    int max=A[0];
    for(int i=1;i<length;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}

int min(){
    int min=A[0];
    for(int i=1;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}

int main(){
    cout<<"the maximum among the array is:";
    int a=max();
    cout<<a<<endl;

    cout<<"the minimum among the array is:";
    int b=min();
    cout<<b<<endl;

    return 0;
}
