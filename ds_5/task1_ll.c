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
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;
    head->next = second;
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;
    second->next = third;
    printf("%d",head->next->data);   
}