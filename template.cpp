#include <iostream>

using namespace std;

template<class T>
class arithmetic{
    private:
    T a;
    T b;
    public:
    arithmetic(T a,T b);
    T add();
    T sub();
};

template<class T>
arithmetic<T>::arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T arithmetic<T>::sub(){
    T c;
    c=a-b;
    return c;
};

int main(){
    arithmetic<int> ar(10,5);
    cout<<ar.add()<<endl;  //can perform on whichever data type it wants to 
    arithmetic<float> ar1(1.5,1.7);
    cout<<ar1.sub()<<endl;

    return 0;
}
