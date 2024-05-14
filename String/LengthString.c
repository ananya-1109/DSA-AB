#include<stdio.h>
#include<stdlib.h>


int length(char A[]){
    int i;
    for(i=0;A[i]!='\0';i++){}
    return i;
}
int main(){
    char S[]="welcome";
    int x=length(S);
    printf("length is:%d",x);

    return 0;
}
