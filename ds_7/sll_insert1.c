#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *createNode = NULL, *new = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        createNode = (struct Node*)malloc(sizeof(struct Node));
        if(createNode == NULL){
            printf("Memory allocation failed.\n");
            return 1;
        }
        printf("Enter data for value %d: ", i + 1);
        scanf("%d", &createNode->data);
        createNode->next = NULL;

        if(head == NULL) {
            head = createNode;
        } else {
            new->next = createNode;
        }
        new = createNode;
    }

    printf("Data in the linked list: ");
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    struct Node* insertNode = (struct Node*)malloc(sizeof(struct Node));
    if(insertNode == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the position where you want to insert: ");
    int position;
    scanf("%d", &position);
    printf("Enter data for the new node: ");
    scanf("%d", &insertNode->data);
    insertNode->next = NULL;

    if(position < 1 || position > n) {
        printf("Invalid position!\n");
    } 
    else if(position == 1) 
    {
        insertNode->next = head;
        head = insertNode;
    } 
    else 
    {
        struct Node *temp = head;
        for(int i = 1; i < position-1 && temp != NULL; i++) {
            temp = temp->next;
        }
        insertNode->next = temp->next;
        temp->next = insertNode;
    }

    printf("Updated Linked List: ");
    temp = head;
    while(temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
