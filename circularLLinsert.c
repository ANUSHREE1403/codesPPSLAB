#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};
void traversal(struct Node*head)
{
    struct Node*ptr=head;
    do
    {
      printf("Element:%d\n",ptr->data);
      ptr=ptr->next;
    } while (ptr!=head);
    
}
struct Node*insertAtFirst(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
     while(p->next!=head)
     {
        p=p->next;
     }
     //now p is at the end
     p->next=ptr;
     ptr->next=head;
     head=ptr;
     return head;

}
int main()
{
    struct Node*head=NULL;
    struct Node*temp=NULL;
    struct Node*newNode=NULL;
    int size,value;
    printf("enter size:");
    scanf("%d",&size);
    printf("enter elements:");
    for(int i=0;i<size;i++){
        int element;
        scanf("%d",&element);
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=element;
        newNode->next=NULL;
        if(head==NULL){
          head=newNode;
          newNode->next=NULL;
          temp=head;
        }
        else{
            temp->next=newNode;
            temp=newNode;
            temp->next=head;
        }
    }
    traversal(head);
    printf("enter value to be inserted at first:");
    scanf("%d",&value);
    head=insertAtFirst(head,value);
    traversal(head);
}
