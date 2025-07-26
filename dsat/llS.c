#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct queue {
    char name[30];
    struct queue *next;
};

struct queue *front = NULL, *rear = NULL;

void arrive(char *name) {
    struct queue *newNode = (struct queue *)malloc(sizeof(struct queue));
    strcpy(newNode->name, name);
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
    printf("ARRIVE %s\n",name);
}

void leave(char *name) {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct queue *temp = front;
    struct queue *prev = NULL;

    while (temp != NULL && strcmp(temp->name, name) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {  
        printf("Name not found in the queue.\n");
        return;
    }

    if (prev == NULL) {
        front = temp->next;
    } else {
        prev->next = temp->next;
    }

    if (temp == rear) {
        rear = prev;
    }

    free(temp);
    printf("%s left the queue.\n", name);
}
void board() {
    struct queue *temp = front;
    while (temp != NULL) {
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}
int main() {
    int n;
    char name[30];

    while(1)
    {
        printf("\n1)arrive, 2)leave, 3)board");
        printf("\nenter the choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("enter your name: ");
                scanf("%s", name);
                arrive(name);
                break;
            case 2:
                printf("enter the name to leave: ");
                scanf("%s", name);
                leave(name);
                break;
            case 3:
                board();
                break;
        }
    }
    return 0;
}
