#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void insertAtEnd(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void printList(struct Node *node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

void deleteAtBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("\n The list is empty, nothing to delete.");
        return;
    }
    struct Node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
}

void deleteAtEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("\n The list is empty, nothing to delete.");
        return;
    }
    struct Node *second_last = *head_ref;
    while(second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    free(second_last->next);
    second_last->next = NULL;
}

int main() {
    struct Node* head = NULL;
    append(&head, 6);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);
    append(&head, 4);
    append(&head, 8);
    printf("\n Created Linked list is: ");
    printList(head);
    deleteAtBeginning(&head);
    printf("\n Linked list after deletion at beginning: ");
    printList(head);
    deleteAtEnd(&head);
    printf("\n Linked list after deletion at end: ");
    printList(head);
    return 0;
}