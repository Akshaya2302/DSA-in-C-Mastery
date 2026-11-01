#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to print all elements in the list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free all allocated memory
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // 1. Allocate memory for 3 nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation succeeded
    if (head == NULL || second == NULL || third == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // 2. Assign data and link the nodes together
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL; // End of list

    // 3. Print the linked list
    printf("Linked List: ");
    printList(head);

    // 4. Free allocated memory
    freeList(head);

    return 0;
}
