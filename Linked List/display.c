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

void Rdisplay(struct node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        Rdisplay(p->next);
    }
}
int main(){
    int A[]={3,5,7,10,15};

    create(A,5);
    display(first);
    printf("\n");
    Rdisplay(first);
    return 0;
}
