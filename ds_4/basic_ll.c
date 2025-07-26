#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
int main()
{
    struct Node *head = NULL;
    struct Node *createNode = (struct Node*)malloc(sizeof(struct Node));
    createNode->data = 10;
    
    createNode->next = NULL;
    head = createNode;
    printf("Data in the first node: %d\n", head->data);
    
}