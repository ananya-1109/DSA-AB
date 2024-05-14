#include<stdio.h>
#include<stdlib.h>

int valid(char A[]){
    int i;
    for(i=0;A[i]!='\0';i++){
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=47 && A[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    char A[]="Anil321";
    if(valid(A)){
        printf("valid entry");
    }
    else{
        printf("invalid entry");
    }

    return 0;
}
