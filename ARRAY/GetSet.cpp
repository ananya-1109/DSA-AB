#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int size=15;
int length=15;

int get(int index){
    if(index>=0 && index<length){
        return A[index];
    }
}

int set(int index,int x){
    if(index>=0 && index<length){
        A[index]=x;
    }
}

int main(){
    int index,x;
    cout<<"enter the index to be searched:";
    cin>>index;
    int a=get(index);
    cout<<a<<endl;


    cout<<"enter the index to be edited:";
    cin>>index;
    cout<<"enter the value:";
    cin>>x;
    int b=set(index,x);
    cout<<"array after setting new value:";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
