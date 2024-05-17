#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void create(int A[],int n){
    int i;
    struct node *t,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *h){
    do{
        printf("%d ",h->data);
        h=h->next;
    }while(h!=head);
    printf("\n");
}

int length(struct node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

int delete(struct node *p,int index){
    struct node *q;
    int i,x;

    if(index<0 || index>=length(head))
    return -1;

    if(index==1){
        p=head;
        while(p->next!=head){
            p=p->next;
        }
        x=head->data;
        if(head==p){
            free(head);
            head=NULL;
        }
    else{
        p->next=head->next;
        free(head);
        head=p->next;
        }
    }
    else{
        for(i=0;i<index-2;i++){
        p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
        return x;
}
int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    //display(head);
    printf("\n");
    delete(head,3);
    display(head);

    return 0;
}
