#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node*next;
};
 
void traversal(struct Node*ptr)
{
    while(ptr!=NULL){
     printf("Element:%d\n",ptr->data);
     ptr=ptr->next;
    }
}
int main()
{
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        int element;
        scanf("%d", &element);

        //create new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = element;
        newNode->next = NULL;
        if (head == NULL) {
            //if list is empty, make the new node the head
            head = newNode;
            temp = newNode;
        } else {
            //else add new node to the end of the list
            temp->next = newNode;
            temp = newNode;
        }
    }
    traversal(head);
}
