#include <stdio.h>
#include <stdlib.h>

// Inserting at End in Linked List

// Structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Structure pointer, for Head Node
struct Node *head = NULL;

// Display list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Insert at end
void insertEnd() {
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    printf("Node inserted.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== INSERT AT END =====\n");
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertEnd();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Program ended.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
