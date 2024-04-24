#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void create(int n)
{
    struct node *newNode,*temp;
    int dat;
    head=malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable");
        exit(0);
    }

    printf("Enter the data of node 1 : ");
    scand("%d",&dat);

    head->data=dat;
    head->next=NULL;

    temp=head;
    for(int i=2;i<=n;i++)
    {
        newNode=malloc(sizeof(struct node));
        if(newNode==NULL)
        {
            printf("Unable to allocate memory");
            break;
        }
        printf("Enter the data of node %d : ",i);
        scanf("%d",&dat);

        newNode->data=dat;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }
}

void traverse()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("Data = %d\n",temp->data);
        temp=temp->next;
    }

}

void inserb(int n)
{
    struct node *newNode;
    newNode=malloc(sizeof(struct node));

    newNode->data=n;
    newNode->next=head;
    head=newNode;
}