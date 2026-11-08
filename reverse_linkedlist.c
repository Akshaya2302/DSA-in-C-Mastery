#include <stdio.h>
#include <stdlib.h>

// Reversing a Linked List

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

// Helper: Insert at end (to build the list for testing)
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

// Reverse linked list
void reverse() {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    printf("Linked list reversed.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== REVERSE LINKED LIST =====\n");
        printf("1. Insert Node (to build list)\n");
        printf("2. Reverse Linked List\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertEnd();
                break;

            case 2:
                reverse();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
