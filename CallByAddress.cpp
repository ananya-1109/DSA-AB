#include<iostream>

using namespace std;
//whem you want a function to directly work upon the actual parameter
void swap(int *x,int *y){ //swap function modifying actual parameters so we don't need to return anything
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
};

int main(){
    int num1=10,num2=15;
    swap(&num1,&num2);

    cout<<"first number:"<<num1<<endl;
    cout<<"second number:"<<num2<<endl;

    return 0;

}