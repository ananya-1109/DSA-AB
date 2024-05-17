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

int delete(struct node *p,int index){
    struct node *q;
    int x=-1,i;

    if(index<1 || index>length(p)){
        return -1;
    }

    if(index==1){
        first=first->next;
        if(first)first->prev=NULL;

        x=p->data;
        free(p);
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next){
            p->next->prev=p->prev;
        }
        x=p->data;
        free(p);
    }
    return x;
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    delete(first,1);
    printf("\nLength is:%d\n",length(first));
    display(first);
    return 0;
}
