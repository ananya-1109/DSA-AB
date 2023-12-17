#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    //struct Rectangle r={10.5}; 
  /*  Rectangle r={10,5}; //c++
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    //for variable use . for pointer use ->
    */

   Rectangle *p;
   p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //heap
  // p=new Rectangle; in c++
   p->length=15;
   p->breadth=7;

   cout<<p->length<<endl;
   cout<<p->breadth<<endl;
    return 0;
}