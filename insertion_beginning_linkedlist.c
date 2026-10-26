#include <stdio.h>
#include <stdlib.h>

// Inserting at Beginning in Linked List

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

// Insert at beginning
void insertBeginning() {
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("Node inserted.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== INSERT AT BEGINNING =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBeginning();
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
