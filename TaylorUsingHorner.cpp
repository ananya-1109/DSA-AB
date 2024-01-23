#include <iostream>

using namespace std;

/*iterative
double e(int x, int n){
    double s=1;
    int i;
    double num=1;
    double den=1;

    for(i=1;i<=n;i++){
        num*=x; //should be multiplies everytime by x
        den*=i;
        s+=num/den;
    }
    return s;
}
*/

double e(int x, int n){
    static double s=1;
    if(n==0)
    return s;
    else 
    s=1+x*s/n;
    return e(x,n-1);
}

int main(){
    cout<<e(1,10)<<endl;
    return 0;
}


