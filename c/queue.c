#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;

int isempty()
{
    return((front==-1 && rear == -1) || front>rear);
}
int isfull()
{
    return(rear==(SIZE-1));
}
void enqueue(int data)
{
    if(isfull())
    {
        printf("The Queue is full!!!!\n");
    }
    else
    {
        if(isempty())
        {
            front=0;
        }
        rear++;
        queue[rear]=data;
    }
}

void dequeue()
{
    if(isempty())
    {
        printf("The queue is emptyy!!\n");
    }
    else
    {
        printf("Deleted element : %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if(isempty())
    {
        printf("The queue is emptyyy!!\n");
    }
    else
    {
        printf("The queue elements are :\n");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d ",queue[i]);
        }
        printf("\n");
    }
}

int main(void)
{
    int n=0,choice;
    printf("Menu ----------------------------------------\n");
    while(1)
    {
        printf(" 1. To enqueue\n 2. To Dequeue\n 3. To display queue\n-1 To exittt\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element that you want to enqueue :");
                scanf("%d",&n);
                enqueue(n);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;
            
            case -1:
                printf("Exitingggggggg!!!!");
                break;
                
            default:
                printf("Please choose the right option!!!\n");
        }
        if(choice==-1)
        {
            break;
        }
    }
}
