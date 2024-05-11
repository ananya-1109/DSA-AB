#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node{
    int data;
    struct node *next;
}*first;

void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
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

void insert(int pos,int x){
    struct node *t,*p;

    if(pos==0){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->next=first;
        first=t;
    }

else if(pos>0){
    p=first;
    for(int i=0;i<pos-1 && p;i++){
        p=p->next;
    }
        if(p){
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    
  }
}

int main(){
    int A[]={8,3,7,12,9};

    create(A,5);
    display(first);
    printf("\n");

    insert(0,15);
    display(first);
    return 0;
}
