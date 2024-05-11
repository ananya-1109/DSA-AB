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

struct node* search(struct node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        else{
            p=p->next;
        }
    }
    return NULL;
}

struct node* TranspositionLSearch(struct node *p,int key){
    struct node *q=NULL;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
}


int main(){
    int A[]={8,3,7,12,9};

    create(A,5);
    //display(first);
    //printf("\n");
    struct node *temp;
    temp=search(first,12);
    if(temp){
        printf("key is found:%d\n",temp->data);
    }
    else{
        printf("key is not found");
    }
    
     struct node *temp1;
    temp1=TranspositionLSearch(first,12);
    if(temp){
        printf("key is found:%d",temp->data);
    }
    else{
        printf("key is not found");
    }
    printf("\n");

    display(first);

    return 0;
}
