#include<iostream>

using namespace std;

/*int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}
*/
int x=0;

int fun(int n){
    //static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int r=5;;
    printf("%d\n",fun(r));
    printf("%d",fun(r));
    return 0;
}