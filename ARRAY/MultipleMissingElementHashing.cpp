#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int A[10]={3,7,4,9,12,6,1,11,2,10};
int size=10;
int length=10;

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

int x=max();
int y=min();

void MissingElement(int A[],int n){
    int i;
    int l=y;
    int h=x;
    int *H=new int[h+1];   //dynamic array
    for (i = 0; i <= h; i++) {
        H[i] = 0; // Initialize H[i] to 0
    }
    //int H[x]={0};
    for(i=0;i<n;i++){
        H[A[i]]++;
    }
    for(i=l;i<=h;i++){
        if(H[i]==0){
            cout<<i<<" ";
        }
    }
    delete[] H; // Deallocate memory
/*In C++, when you allocate memory dynamically using new,
 you need to deallocate that memory manually when you no
  longer need it to avoid memory leaks. Memory allocated 
  with new persists until it is explicitly deallocated with delete.*/
}

int main(){
    cout<<"the missing elements are:";
    MissingElement(A,length);

    return 0;
}
