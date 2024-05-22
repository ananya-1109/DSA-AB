#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL;

void push(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));

    if(t==NULL){
        printf("stack is full\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct node *p;
    int x=-1;
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}

int peek(int pos){
    int x=-1;
    struct node *p=top;
    for(int i=0;p!=NULL&&i<pos-1;i++){
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }
    else{
        return -1;
    }
}

int stackTop(){
    if(top){
        return top->data;
    }
    else{
        return -1;
    }
}

int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    //if not null assign true  to r else false
    int r=t?1:0;
    free(t);
    return r;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    printf("%d ",pop());

    printf("%d ",peek(3));

    return 0;
}
