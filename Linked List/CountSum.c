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

int count(struct node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

int add(struct node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}


int main(){
    int A[]={3,5,7,10,15};

    create(A,5);
    //display(first);
    //printf("\n");
    int a=count(first);
    printf("%d ",a);
    printf("\n");
    int b=add(first);
    printf("%d ",b);
    return 0;
}
