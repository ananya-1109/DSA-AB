#include<stdio.h>
#include<stdlib.h>

void UpperToLower(char A[]){
    for(int i=0;A[i]!='\0';i++){
        A[i]=A[i]+32;
    }
    printf("%s",A);
}

void LowerToUpper(char A[]){
    for(int i=0;A[i]!='\0';i++){
        A[i]=A[i]-32;
    }
    printf("%s",A);
}

int main(){
    char A[]="WELCOME";
    UpperToLower(A);
    printf("\n");
    LowerToUpper(A);

    return 0;
}
