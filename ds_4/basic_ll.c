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
    //we use arrow notation to access the data field of the struct without separate variable
    //createNode->next is used to point to the next node in the linked list
    //since this is the first node, it will not point to any other node
    //hence we set it to NULL
    
    createNode->next = NULL;
    head = createNode;
    printf("Data in the first node: %d\n", head->data);
    
}