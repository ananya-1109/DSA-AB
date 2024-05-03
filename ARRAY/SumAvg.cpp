#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int size=15;
int length=15;

int sum(){
    int total=0;
    for(int i=0;i<length;i++){
        total=total+A[i];
    }
    return total;
}

int average(){
    int total=0;
    for(int i=0;i<length;i++){
        total=total+A[i];
    }
    return total/length;   
}

int main(){
    cout<<"the sum of the array is:";
    int a=sum();
    cout<<a<<endl;

    cout<<"the average of the array is:";
    int b=average();
    cout<<b<<endl;

    return 0;
}
