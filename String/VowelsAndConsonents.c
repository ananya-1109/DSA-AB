#include<stdio.h>
#include<stdlib.h>

int CountVowel(char A[]){
    int vcount=0,ccount=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            vcount++;
        }
    }
    return vcount;
}

int CountConsonents(char A[]){
    int ccount=0;
    for(int i=0;A[i]!='\0';i++){
        if(((A[i]!='a' && A[i]!='e' && A[i]!='i' && A[i]!='o' && A[i]!='u') && (A[i]!='A' && A[i]!='E' && A[i]!='I' && A[i]!='O' && A[i]!='U')) && ((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))){
            ccount++;
        }
    }
    return ccount;
}


int main(){
    char A[]="How are you?";
    int x=CountVowel(A);
    printf("total number of vowels:%d",x);
    printf("\n");
    int y=CountConsonents(A);
    printf("total number of consonents:%d",y);
    printf("\n");

    return 0;
}
