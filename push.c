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
    for(int i=1;i<=s->size;i++){
     printf("enter a value to push on index %d :\n",i);
     scanf("%d",&val);
    push(s,val);
    }
    free(s->arr);
    free(s);
}
