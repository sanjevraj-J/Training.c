#include <stdio.h>
#include <stdlib.h>

struct queue {
    int data;
    struct queue *next;
};

struct queue *front = NULL, *rear = NULL;
int n;
int count = 0;

void enqueue(int val) {
    if (n == count) {
        printf("Queue is full\n");
    } else {
        struct queue *createnode = (struct queue *)malloc(sizeof(struct queue));
        createnode->data = val;
        createnode->next = NULL;
        if (front == NULL) {
            front = createnode;
        } else {
            rear->next = createnode;
        }
        rear = createnode;
        count++;
    }
}

void display() {
    struct queue *temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct queue *temp = front;
    printf("Dequeued element: %d\n", temp->data);
    front = front->next;
    free(temp);
    count--;
    if (front == NULL) {
        rear = NULL;
        printf("Queue is now empty.\n");
    }
}

int main() {
    printf("Enter the size: ");
    scanf("%d", &n);
    int z;
    while (1) {
        printf("Enter your choice\n");
        printf("1) Enqueue, 2) Display, 3) Dequeue, 4) Exit: ");
        scanf("%d", &z);
        switch (z) {
            case 1: {
                int val;
                printf("Enter the value to be added to the queue: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            }
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            case 4:
                return 0;
        }
    }
}
