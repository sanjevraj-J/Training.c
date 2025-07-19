#include <stdio.h>
int size;
int deque[100];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == size - 1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insertAtRear(int val) {
    if (isFull()) {
        printf("The Queue is Full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == size - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = val;
    printf("Inserted at rear\n");
}

void insertAtFront(int val) {
    if (isFull()) {
        printf("The Queue is Full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = size - 1;
    } else {
        front--;
    }
    deque[front] = val;
    printf("Inserted at front\n");
}

void displayQueue() {
    if (isEmpty()) {
        printf("The Queue is Empty\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}

void popAtFront() {
    if (isEmpty()) {
        printf("The Queue is Empty\n");
        return;
    }
    printf(" element is popped from front");
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

void popAtRear() {
    if (isEmpty()) {
        printf("The Queue is Empty\n");
        return;
    }
    printf("element is popped from rear");
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = size - 1;
    } else {
        rear--;
    }
}

int main() {
    int n, val;
    printf("Enter the size ",&size);
    scanf("%d", &size);
    while (1) {
        printf("\n1) Insert At Rear,2) Insert At Front,3) Display,4) Pop At Front,5) Pop At Rear,6) Exit\nChoose: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Enter the Value: ");
                scanf("%d", &val);
                insertAtRear(val);
                break;
            case 2:
                printf("Enter the Value: ");
                scanf("%d", &val);
                insertAtFront(val);
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                popAtFront();
                break;
            case 5:
                popAtRear();
                break;
            case 6:
                return 0;
        }
    }
    return 0;
}
