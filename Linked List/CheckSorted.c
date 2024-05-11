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

int isSorted(struct node *p){
    int x=INT_MIN;
    while(p!=NULL){
        if(p->data<x){
            return 0;
        }
        else{
            x=p->data;
            p=p->next;
        }
    } 
    return 1;
}
int main(){
    int A[]={33,15,7,10,15};

    create(A,5);

    printf("%d\n",isSorted(first));
    display(first);

    return 0;
}
