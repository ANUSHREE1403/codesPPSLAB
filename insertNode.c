#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node*next;
};
void traversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node*insertNode(struct Node*head,struct Node*pre,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=pre->next;
    pre->next=ptr;
    return head;
}
int main()
{
    struct Node*head;//1
    struct Node*s;//2
    struct Node*t;//3
    struct Node*f;//4
    int data;
    head=(struct Node*)malloc(sizeof(struct Node*));
    s=(struct Node*)malloc(sizeof(struct Node*));
    t=(struct Node*)malloc(sizeof(struct Node*));
    f=(struct Node*)malloc(sizeof(struct Node*));

    head->data=10;
    head->next=s;
    s->data=100;
    s->next=t;
    t->data=1000;
    t->next=f;
    f->data=10000;
    f->next=NULL;
    printf("enter the data to be inserted at end:");
    scanf("%d",&data);
    head=insertNode(head,s,data);
    traversal(head);

}