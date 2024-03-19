#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
void insert(int n)
{
    
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = n;
    newnode -> next = NULL;
    

}