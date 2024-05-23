#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
}*top=NULL;

void push(char x){
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

char pop(){
    struct node *p;
    char x=-1;
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


int isBalanced(char *exp){
    int i;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){return 1;}
    else{
        return 0;
    }
}

int main(){
    char *exp="((a+b)*(c-d))";

    printf("%d ",isBalanced(exp));
    
    return 0;
}
