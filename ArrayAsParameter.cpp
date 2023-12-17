#include<iostream>

using namespace std;

void fun(int A[ ]){  //int *A
//array alwayspassed by address and A[] is a pointer which can access array
// cout<<sizeof(A)/sizeof(int)<<endl;  //8/4
   for(int i=0;i<5;i++)
   cout<<A[i]<<endl;
   A[0]=20;
}

int main(){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A);
   // cout<<sizeof(A)/sizeof(int)<<endl;
    for(int i=0;i<n;i++)       //for(int x:A) 
    cout<<A[i]<<endl;          //cout<<x<<endl;

    return 0;
}