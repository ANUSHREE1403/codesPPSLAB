#include<stdlib.h>
#include<stdio.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1){
    return 1;
    }
    else {
        return 0;
    }

}
int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1){
    return 1;
    }
    else {
        return 0;
    }

}
void push(struct stack*ptr,int value)
{
    if(isFull(ptr)){
     printf("stack overflow\n");
     
    }
    else{
     ptr->top++;
     ptr->arr[ptr->top]=value;
     
    }
}
void pop(struct stack*ptr)
{
    if(isEmpty(ptr)){
     printf("stack underflow");

    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        printf("popped value:%d\n",value);
    }
}
int peek(struct stack* s,int i)
{
    int index=s->top-i+1;
    if(index<0){
        printf("invalid index");
        return -1;
    }
    else{
        return s->arr[index];
    }
}
int main()
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    int val;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if(isEmpty(s)){
        printf("stack is empty\n");
    }
    if(isFull(s)){
        printf("stack is full\n");
    }
    for(int i=0;i<s->size;i++){
     printf("enter a value to push on index %d :\n",i);
     scanf("%d",&val);
    push(s,val);
    }
    pop(s);
    printf("peeking after pop:\n");
    for(int j=0;j<s->top+1;j++)
    {
        printf("element at index %d is %d\n",j,peek(s,j));
    }
    free(s->arr);
    free(s);
}
