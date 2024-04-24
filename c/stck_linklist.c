#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *head = NULL;

int isempty()
{
    return(head==NULL);
}

void push(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = val;
    newnode -> next = head;
    head = newnode;
}

void pop()
{
    if(isempty())
    {
        printf("The stack is empty!!!");
    }
    else
    {
        struct node *temp;
        printf("Deleted element = %d",head -> data);
        temp = head;
        head = head -> next;
        free(temp);
    }

}


void display()
{
    struct node *temp=head;
    printf("Stack :");
    while(temp!=NULL)
    {
        printf(" %d ->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

int main(void)
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
}