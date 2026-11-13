#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
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

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        temp = head;

        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }

    printf("Node inserted.\n");
}

// Display list
void display() {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    printf("Circular List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

// Delete from beginning
void delete() {
    struct Node *temp, *last;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;

    if (head->next == head) {
        head = NULL;
    } else {
        last = head;

        while (last->next != head)
            last = last->next;

        head = head->next;
        last->next = head;
    }

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
