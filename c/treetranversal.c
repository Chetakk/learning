#include<stdio.h>

struct node 
{
    int data;
    int *leftchild;
    int *rightchild;
};

struct node *root = NULL;

void insert(int data)
{
    struct node *tempnode = malloc(sizeof(struct node));
    struct node *current;
    struct node *parent;

    tempnode -> data = data;
    tempnode -> leftchild = NULL;
    tempnode -> rightchild = NULL;

    if(root == NULL)
    {
        root = tempnode;
    }
    else
    {
        current = root;
        parent = NULL;

        while(1)
        {
            parent = current;

            if(data < parent -> data)
            {
                current = current -> leftchild;
                if(current == NULL)
                {
                    parent -> leftchild = tempnode;
                    return;
                }
            }
            else
            {
                current = current -> rightchild;
                if(current == NULL)
                {
                    parent -> rightchild = tempnode;
                    return;
                }
            }
        }
    }
}