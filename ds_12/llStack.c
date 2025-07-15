#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("Value  pushed onto stack\n");
}

void pop(struct Node** top)
{
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);
}
int main() {
    struct Node* stack = NULL;
    int node;
    printf("enter the node you want in the stack:");
    scanf("%d",&node);
    for(int i=0;i<node;i++)
    {
        int val;
        printf("enter the val:");
        scanf("%d",&val);
        push(&stack,val);
    }
    
    struct Node* temp = stack;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    pop(&stack);
    printf("Stack after popping an element: ");
    temp = stack;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    return 0;
}