#include<iostream>
using namespace std;

int main(){
    int A[10]={2,3,4,5,4,2};

    for(int i=0;i<10;i++){ //for(int x:A)
        cout<<A[i]<<endl;
    }
    return 0;
}