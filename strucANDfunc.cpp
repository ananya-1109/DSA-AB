#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(Rectangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main(){
    Rectangle r={0,0};

    printf("enter length and breadth");
    cin>>r.length>>r.breadth;

    int a= area(r);
    int peri=perimeter(r);

    printf("area=%d\nperimeter=%d\n",a,peri);

    return 0;
}