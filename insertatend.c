#include<stdlib.h>
#include<stdio.h>

struct Node
{
    struct Node*next;
    int data;
};
struct Node*insertAtEnd(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    ptr->data=data;
    while(p->next!=NULL){
      p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
void traversal(struct Node*ptr)
{
   while(ptr!=NULL)
   {
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
   } 
};
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
    head=insertAtEnd(head,data);
    traversal(head);
}
