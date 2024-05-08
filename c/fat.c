#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void createList(int n){
    struct node *newNode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    if(head == NULL){
        printf("404");
        exit(0);
    }

    printf("Enter data for node 1 :");
    scanf("%d",&data);
    
    head->data = data;
    head->next = NULL;
    temp = head;

    for(i=2;i<=n;i++){
        newNode = malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("404");
            exit(0);
        }

        printf("Enter data for node %d :",i);
        scanf("%d",&data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp =  newNode;
    }
}

void displayList(){
    struct node *temp;
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    temp = head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}


void insertB(){
    struct node * newNode;
    int data;
    newNode = malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("404");
        exit(0);
    }

    printf("Enter data to insert at beginning :");
    scanf("%d",&data);

    newNode->data = data;
    newNode->next = head;
    head = newNode;
}


void insertE(){
    struct node *newNode, *temp;
    int data;
    newNode = malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("404");
        exit(0);
    }

    printf("Enter data to insert at end :");
    scanf("%d",&data);

    newNode->data = data;
    newNode->next = NULL;

    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

void deleteB(){
    struct node *toDelete;
    if(head == NULL){
        printf("List is empty\n");
    }else{
        toDelete = head;
        head = head->next;
        printf("Data deleted = %d\n",toDelete->data);
        free(toDelete);
    }
}

void deleteE(){
    struct node *toDelete, *secondLast;
    if(head == NULL){
        printf("List is empty\n");
    }else{
        toDelete = head;
        secondLast = head;
        while(toDelete->next!=NULL){
            secondLast = toDelete;
            toDelete = toDelete->next;
        }
        if(toDelete == head){
            head = NULL;
        }else{
            secondLast->next = NULL;
        }
        printf("Data deleted = %d\n",toDelete->data);
        free(toDelete);
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    createList(n);
    printf("\n Data in the list \n");
    displayList();
}