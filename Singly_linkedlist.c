#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert a new node at the front of the list
void push(struct Node** head_ref, int new_data) {
    // 1. Allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Link the old list to the new node
    new_node->next = *head_ref;

    // 4. Move the head pointer to point to the new node
    *head_ref = new_node;
}

// Traverse and print list elements
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Free all allocated nodes
void freeList(struct Node** head_ref) {
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL; // Prevent dangling pointer
}

int main() {
    // Start with an empty list
    struct Node* head = NULL;

    // Add elements: list becomes 30 -> 20 -> 10 -> 5 -> NULL
    push(&head, 5);
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);

    printf("Created Linked List: ");
    printList(head);

    // Clean up
    freeList(&head);

    return 0;
}
