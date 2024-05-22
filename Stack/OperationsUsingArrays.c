#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *S;
};

void create(struct stack *st){
    printf("enter size:");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
}

void display(struct stack st){
    int i;
    for(i=st.top;i>=0;i--){
        printf("%d ",st.S[i]);
    }
    printf("\n");
}

void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("stack overflow\n");
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        printf("stack underflow");
    }
    else{
        x=st->S[st->top--];
    }
    return x;
}

int peek(struct stack st,int pos){
    int x=-1;
    if(st.top-pos+1<0){
        printf("invalid position");
    }
    else{
        x=st.S[st.top-pos+1];
    }
    return x;
}

int stackTop(struct stack st){
    if(st.top==-1){
        return -1;
    }
    else{
        return st.S[st.top];
    }
}

int isEmpty(struct stack st){
    if(st.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack st){
    if(st.top==st.size-1){
        return 1;
    }
    else{
        return 0;
    }
}

/*      int stackTop(struct stack st){
    if(!isEmpty(st)){
        return st.S[st.top]
        else{
            return -1;
        };
    }
}
*/
int main(){
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);

    printf("%d \n",peek(st,1));
    display(st);

    printf("%d \n",pop(&st));
    printf("%d \n",peek(st,1));
    printf("\n");

    return 0;
}
