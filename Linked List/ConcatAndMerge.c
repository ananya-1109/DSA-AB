#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;    //global pointer(can be directly accessed)


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

void create2(int A[],int n){
    int i;
    struct node *t,*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last=second;

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

void Rdisplay(struct node *p){    //recursive display
    if(p!=NULL){
        printf("%d ",p->data);
        Rdisplay(p->next);
    }
}

void ReverseDisplay(struct node *p){
    if(p!=NULL){
    ReverseDisplay(p->next);
    printf("%d ",p->data);
    }
}

void concat(struct node *p,struct node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
    q=NULL;
}

void merge(struct node *p,struct node *q){
    struct node *last;
    if(p->data < q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
    }
    if(q!=NULL){
        last->next=q;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    int B[]={1,12,35,45,55};
    create(A,5);
    create2(B,5);

    //concat(first,second);
    //display(third);
    //printf("\n");
    
    merge(first,second);
    display(third);
    printf("\n");
   // display(second);

    return 0;
}
