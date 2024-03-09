#include<stdio.h>
#define size 5
int front=-1,rear=-1,queue[size];
int isfull()
{
    return(rear==size);
}
int isempty()
{
    if(front>rear)ko
    {
        front=rear=-1;
    }
    return(front==-1);
}
void enqueue(int n)
{
    if(isfull())
    {
        printf("The Quese is FULL");
    }
    else
    {
        front=0;
        rear++;
        queue[rear]=n;
    }
}
void dequeue()
{
    if(isempty())
    {
        printf("\nThe Queue is EMPTY");
    }
    else
    {
        printf("\nDeleted Value = %d",queue[front]);
        front++;
    }
}

void display()
{
    if(isempty())
    {
        printf("\nQueue is empty ");
    }
    else
    {
        printf("The Queue is :");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}

int main()
{
    int choice;
    printf("Menu-----------------------------------");
    while(1)
    {
        int n;
        printf("\n 1. To Enqueue\n 2. To Dequeue\n 3. To Display\n-1 To Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter the value to input :");
                scanf("%d",&n);
                enqueue(n);
            }
            break;
            case 2:
            {
                dequeue();
            }
            break;
            case 3:
            {
                display();
            }
            break;
            case -1:
            {
                break;
            }
            default :
            printf("Invalid Input!!! Please Enter valid input");
        }
        if(choice==-1)
        {
            printf("Exitingggggg--------");
            break;
        }
    }   
    return 0;
}