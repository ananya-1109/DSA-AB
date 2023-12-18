#include<iostream>

using namespace std;

/* struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectanglr *r,int l,int b){
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r){
    return r.length*r.breadth;
}
void changeLength(struct rectangle *r,int l){
    r->length=l;
}

int main(){
    struct rectangle r;

    initialize(&r,10,5);
    area(r);
    changeLength(&r,20);
*/

class rectangle{
    private:
    int length;
    int breadth;

public:
//void initialize(int l,int b){
    rectangle(int l,int b){ //rectangle() is a contructor(creates an object or initializes an object)
   length=l;
   breadth=b;
}
int area(){
   // cout<<"area:"<<length*breadth<<endl;
    return length*breadth;
}
void changeLength(int l){
    length=l;
}
};

int main(){
     rectangle r(10,5); //direct initialization at the time of declaration only

    //r.initialize(10,5);
    int x=r.area();
    cout<<"area:"<<x<<endl;
    cout<<"area:"<<r.area()<<endl; //saves storage occupied by x
    r.changeLength(20);
    int y=r.area();
    cout<<"area:"<<y<<endl;
    return 0;
}
