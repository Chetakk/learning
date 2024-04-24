#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front=NULL,*rear=NULL;

void enqueue(int n)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = n;
    newnode -> next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }

}

void dequeue()
{
    if(front!=NULL)
    {
        struct node *temp;
        temp = front;
        front = front -> next;
        free(temp);
    }
    

}


void display()
{
    if(front==NULL)
    {
        printf("The queue is empty!!!!");
    }
    else
    {
        printf("Queue : ");
        struct node *temp;
        temp = front;
        while(temp!=NULL)
        {
            printf("%d -> ",temp -> data);
            temp = temp -> next;
        }
        printf("NULL");
    }
}

int main(void)
{
    enqueue(15);
    enqueue(16);
    enqueue(45);
    enqueue(23);
    enqueue(44);
    enqueue(32);
    dequeue();
    dequeue();
    display();
}
