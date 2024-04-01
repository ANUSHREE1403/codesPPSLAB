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

int main()
{
    struct Node*head=NULL;
    struct Node*temp=NULL;
    struct Node*newNode=NULL;

    int size;
    printf("enter size of list:\n");
    scanf("%d",&size);
    printf("enter elements of list:\n");
    for(int i=0;i<size;i++)
    {
        int element;
        scanf("%d",&element);
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=element;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            newNode->next=NULL;
            temp=head;//circular
        }
        else{
            temp->next=newNode;
            temp=newNode;
            temp->next = head;//circular
        }
    }
    traversal(head);
}