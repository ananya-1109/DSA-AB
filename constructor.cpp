#include<iostream>

using namespace std;

class Rectangle{
    private:  //by default they are private only
    int length;
    int breadth;
    
    public:          //every c++ class should have a constructor
    Rectangle(){      //default constructor   
        length=breadth=0;
    }
    Rectangle(int l,int b){  //parameterized constructor
        length=l;
        breadth=b;
    }
                                          
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
//mutated functions
    void setLength(int l){      //reading and writing properties of a rectangle
        length=l;
    }        
    void setBreadth(int b){
        breadth=b;
    }
//accessor functions used for reading properties of length and breadth
    int getLength(){  //to know what is the length
        return length;
    }
    int getBreadth(){  //to know what is the breadth
        return breadth;
    }
   ~Rectangle(){
        cout<<"DESTRUCTOR";
   }
};

int main(){
    Rectangle r(10,5);
    cout<<"AREA"<<r.area()<<endl;
    cout<<"PERIMETER"<<r.perimeter()<<endl;
    //r.setLength(20);
   // cout<<r.getLength();

    return 0;
}