#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node*next;
};
struct Node* insertAtFirst(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr; 
};
struct Node* insertAtIndex(struct Node* head,int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node*));
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
void traversal(struct Node*ptr)
{
    while(ptr!=NULL){
     printf("Element:%d\n",ptr->data);
     ptr=ptr->next;
    }
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
    printf("enter the data to be inserted at first:");
    scanf("%d",&data);
    head=insertAtIndex(head,data,2);
    traversal(head);
}
