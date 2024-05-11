#include<stdio.h>
#include<stdlib.h>

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

int isLoop(struct node *f){
    struct node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:q;
    }while(p && q && p!=q);
    if(p == q){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    struct node *t1,*t2;

    int A[]={10,20,30,40,50};
    create(A,5);

    t1=first->next->next; //30
    t2=first->next->next->next->next; //50
    t2->next=t1; //created loop 50->30

    printf("%d",isLoop(first));
    

    return 0;
}
