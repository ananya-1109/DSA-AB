#include<iostream>

using namespace std;

/*void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
};

int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    printf("%d\n%d",a,b);

    return 0;
}
*/
//when a function just has to process get some results and return those results
int add(int a, int b){ //any changes done to the formal parameters will not change the actual parameters
   // int c;
    //c=a+b;
    a++; //value of num1 copied to a so will this change num1 also? no
    cout<<a;
    return 0;
}

int main(){
    int num1=10,num2=15,sum;
    sum= add(num1,num2); //actual parameters will not change
    cout<<endl<<num1;
    //cout<<"sum is"<<sum;
    
    return 0;
}