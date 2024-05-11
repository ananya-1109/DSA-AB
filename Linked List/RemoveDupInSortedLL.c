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

void RemoveDuplicates(struct node *p){
    struct node *q=p->next;

    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

int main(){
    int A[]={3,5,5,10,10};

    create(A,5);

    RemoveDuplicates(first);

    display(first);
    printf("\n\n");
    
    return 0;
}
