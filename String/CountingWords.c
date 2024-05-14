#include<stdio.h>
#include<stdlib.h>

int CountWords(char A[]){
    int word=1;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' '){
            word++;
        }
    }
    return word;
}

int main(){
    char A[]="How are you?";
    int x=CountWords(A);
    printf("total number of words:%d",x);
    printf("\n");

    return 0;
}
