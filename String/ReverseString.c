#include<stdio.h>
#include<stdlib.h>

void ReverseString(char A[]){  //using an extra array
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

void ReverseBySwapping(char A[]){
    char temp;
    int i,j;
    for(j=0;A[j]!='\0';j++){
    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}

int main(){
    char A[]="python";
    ReverseString(A);
    printf("\n");
    ReverseBySwapping(A);

    return 0;
}
