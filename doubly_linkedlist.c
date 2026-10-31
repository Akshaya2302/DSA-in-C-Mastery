#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at end
void insert() {
    struct Node *newNode, *temp;
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("Node inserted.\n");
}

// Display forward
void display() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Doubly Linked List: ");

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Delete from beginning
void delete() {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);

    printf("Node deleted.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Delete from Beginning\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;

            case 3:
                delete();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}
