#include<stdio.h>
#include<stdlib.h>

void ReverseString(char A[]){
    char B[100];
    int i,j;
    for(i=0;A[i]!='\0';i++){
    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    B[j]='\0';

    printf("%s",B);
}

int main(){
    char A[]="python";
    ReverseString(A);

    return 0;
}
