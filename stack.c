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
int main()
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if(isEmpty(s)){
        printf("stack is empty\n");
    }
    if(isFull(s)){
        printf("stack is full\n");
    }

    free(s->arr);
    free(s);
}
