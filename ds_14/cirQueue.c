#include <stdio.h>
int n;
int queue[100];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % n == front) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % n;
    }
    queue[rear] = val;
    printf("Value is added to the queue\n");
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Value is deleted\n");
    front = (front + 1) % n;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    while (1) { 
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    printf("\n");
}

int main() {
    printf("Enter the size: ");
    scanf("%d", &n);
    int z; 
    while (1) {
        printf("Enter your choice\n");
        printf("1) Enqueue, 2) Display, 3) Dequeue, 4) Exit\n");
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
