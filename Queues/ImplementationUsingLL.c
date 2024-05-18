#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){
        printf("queue is full");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct node *p;

    if(front==NULL){
        printf("queue is empty");
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        free(p);
    }
    return x;
}

void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display(front);

    printf("%d ",dequeue());

    return 0;
}
