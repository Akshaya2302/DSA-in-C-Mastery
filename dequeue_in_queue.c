#include <stdio.h>

// Dequeue Operation in Queue (Static Array)

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Helper: Enqueue (to build the queue for testing)
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted into queue.\n", value);
    }
}

// Dequeue operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

// Display operation
void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements are: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- DEQUEUE OPERATION ---\n");
        printf("1. Enqueue (to build queue)\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
