#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node{
    int data;
    struct node *next;
}*first;    //global pointer(can be directly accessed)


void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int max(struct node *p){
    int m=INT_MIN;
    while(p){
        if(p->data>m){
            m=p->data;
            p=p->next;
        }
    }
    return m;
}


int main(){
    int A[]={8,3,7,12,9};

    create(A,5);
    //display(first);
    //printf("\n");
    int a=max(first);
    printf("%d ",a);

    return 0;
}
