#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    struct node *t,*last;
    int i;

    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int length(struct node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

void insert(struct node *p,int index,int x){
    struct node *t;
    int i;

    if(index<0 || index>length(p)){
        return;
    }

    if(index==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;

        t->prev=p;
        t->next=p->next;
        if(p->next)p->next->prev=t;
        p->next=t;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

    insert(first,2,25);
    printf("\nLength is:%d\n",length(first));
    display(first);
    return 0;
}
