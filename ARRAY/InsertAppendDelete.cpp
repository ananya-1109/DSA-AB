#include<stdio.h>

int A[10]={8,3,7,12,6,9,10};
    int size=10;
    int length=7;

void insert(int index,int x){
    for(int i=length;i>index;i--){
        A[i]=A[i-1];
    }
    A[index]=x;
    length++;

    printf("Array after inserting:\n");
     for(int i=0;i<10;i++){
        printf("%d ",A[i]);
     }
     printf("\n");
}

void append(int x){
    A[length]=x;
    length++;
    printf("Array after append:\n");
     for(int i=0;i<length;i++){
        printf("%d ",A[i]);
     }
     printf("\n");
}

void display(){
    for(int i=0;i<length;i++){
        printf("%d ",A[i]);
    }
}

int delete(int index){
    if(index>=0 && index<length){
    int x=A[index];
    for(int i=index;i<length-1;i++){
        A[i]=A[i+1];
    }
    length--;

    printf("Array after deletion:\n");
     for(int i=0;i<length;i++){
        printf("%d ",A[i]);
     }
    }
    return 0;
}

int main(){
    insert(4,15);
    append(20);
    delete(6);
    return 0;
}
