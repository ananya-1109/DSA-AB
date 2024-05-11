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

int count(struct node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void reverse1(struct node *q){ //can take node *p where p=first
    int *A,i=0;

    A=(int *)malloc(sizeof(int)*count(first));
    q=first;

    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=first; //can use p instead of first everywhere
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void reverse2(struct node *p){    //sliding pointers
    struct node *q=NULL,*r=NULL;

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void reverse3(struct node *q,struct node *p){  //recursive function
    if(p!=NULL){
        reverse3(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}

int main(){
    int A[]={10,20,30,40,50};

    create(A,5);
    reverse1(first);
    printf("\n");
    reverse2(first);
    printf("\n");
    reverse3(NULL,first);
    display(first);
    
    return 0;
}
