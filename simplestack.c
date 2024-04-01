#include <stdio.h>

#define SIZE 5
int arr[5], top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == SIZE - 1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        arr[top] = data;
    }
    else
        printf("stack is full");
}

int pop()
{
    if (!isEmpty())
    {
        int value = arr[top];
        top = top - 1;
        printf("popped element is: %d\n", value);
        return value;
    }
    else
    {
        printf("stack is empty\n");
        return -1;
    }
}

void peek()
{
    if (!isEmpty())
    {
        printf("\n%d", arr[top]);
    }
    else
    {
        printf("\nstack is empty");
    }
}

void display()
{
    int temp = top;
    while (temp >= 0)
    {
        printf("\n%d", arr[temp]);
        temp--;
    }
}

int main()
{
    int ch;
    int flag = 1;
    while (flag)
    {
        printf("enter your choices from the drop-down menu:\n1 push \n2 pop \n3 peak \n4 display \n5 exit\n");
        printf("enter choice here:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            int element;
            printf("enter element to push:\n");
            scanf("%d", &element);
            push(element);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            flag = 0;
            break;

        default:
            printf("enter a valid option:\n");
            flag = 0;
            break;
        }
    }
    return 0;
}
