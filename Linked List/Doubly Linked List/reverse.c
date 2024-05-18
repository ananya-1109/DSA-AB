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

void reverse(struct node *p){
    struct node *temp;

    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
            first=p;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

    reverse(first);
    display(first);
    return 0;
}
