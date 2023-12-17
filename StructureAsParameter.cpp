#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
//call by value
void fun(struct Rectangle r){
    r.length=20;
    cout<<"length"<<r.length<<endl<<"breadth"<<r.breadth<<endl;
}
int main(){
    struct Rectangle r={10,5};
    fun(r);
    printf("length %d\nbreadth %d\n",r.length,r.breadth);

    return 0;
}
/*
//call by address
void fun(struct Rectangle *p){  //create a pointer here
    p->length=20;
    cout<<"length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
}
int main(){
    struct Rectangle r={10,5};
    fun(&r); //we'll pass address
    printf("length %d\nbreadth %d\n",r.length,r.breadth);

    return 0;
}
//to demonstrate how a function can return a pointer to an object created in heap and that can be accessed using main function also
struct Rectangle *fun(){ //returning pointer to a structure
    struct Rectangle *p;
    p=new Rectangle;  //c++
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));  c
    p->length=15;
    p->breadth=7;
}
int main(){
    struct Rectangle *ptr=fun();
    cout<<"length"<<ptr->lenght<<endl<<"breadth"<<ptr->breadth<<endl;

    return 0;
}
*/   

