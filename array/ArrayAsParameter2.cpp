#include<iostream>

using namespace std;

int *fun(int size){ //creating an array of the given size
    int *p;
    p=new int[size]; //creating an array in heap

    for(int i=0;i<size;i++)
    p[i]=i+1;  //inirializing all the elements

    return p;
}

int main(){
    int *ptr,sz=8;

    ptr=fun(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}