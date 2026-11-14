#include <stdio.h>
#include <stdlib.h>

// 1. Blueprint for the Node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 2. Create Node 1
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    // 3. Create Node 2
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;

    // 4. Hook them together!
    head->next = second;
    second->next = NULL;

    // 5. Walk through and print!
    struct Node *temp = head;
    printf("My First Linked List:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;   // Jump to the next coach!
    }
    printf("NULL\n");

    return 0;
}
