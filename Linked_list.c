#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Structure pointer, for Head Node
struct Node *head = NULL;

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

// Insert at specific position
void insertPosition() {
    int value, position, i;

    printf("Enter value: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &position);

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        printf("Node inserted.\n");
        return;
    }

    struct Node *temp = head;

    for (i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted.\n");
}

// Delete from beginning
void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;

    free(temp);

    printf("Node deleted.\n");
}

// Delete from end
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Node deleted.\n");
        return;
    }

    struct Node *temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;

    printf("Node deleted.\n");
}

// Delete from specific position
void deletePosition() {
    int position, i;

    printf("Enter position: ");
    scanf("%d", &position);

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (position == 1) {
        struct Node *temp = head;
        head = head->next;
        free(temp);

        printf("Node deleted.\n");
        return;
    }

    struct Node *temp = head;

    for (i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    printf("Node deleted.\n");
}

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

// Search an element
void search() {
    int value, position = 1;

    printf("Enter value to search: ");
    scanf("%d", &value);

    struct Node *temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("Element found at position %d.\n", position);
            return;
        }

        temp = temp->next;
        position++;
    }

    printf("Element not found.\n");
}

// Count nodes
void countNodes() {
    int count = 0;

    struct Node *temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Number of nodes = %d\n", count);
}

// Update an element
void update() {
    int position, value, i;

    printf("Enter position to update: ");
    scanf("%d", &position);

    printf("Enter new value: ");
    scanf("%d", &value);

    struct Node *temp = head;

    for (i = 1; i < position && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    temp->data = value;

    printf("Element updated.\n");
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

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n===== LINKED LIST MENU =====\n");
        printf("1.  Insert at Beginning\n");
        printf("2.  Insert at End\n");
        printf("3.  Insert at Position\n");
        printf("4.  Delete from Beginning\n");
        printf("5.  Delete from End\n");
        printf("6.  Delete from Position\n");
        printf("7.  Display\n");
        printf("8.  Search\n");
        printf("9.  Count Nodes\n");
        printf("10. Update\n");
        printf("11. Reverse\n");
        printf("12. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertPosition();
                break;

            case 4:
                deleteBeginning();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                deletePosition();
                break;

            case 7:
                display();
                break;

            case 8:
                search();
                break;

            case 9:
                countNodes();
                break;

            case 10:
                update();
                break;

            case 11:
                reverse();
                break;

            case 12:
                printf("Program ended.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
