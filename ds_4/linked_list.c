#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
int main()
{
    struct Node *head = NULL,*createNode = NULL,*new=NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        createNode = (struct Node*)malloc(sizeof(struct Node));//type casting the malloc to struct Node pointer
        int value;
        printf("Enter data for value %d: ", i+1);
        scanf("%d", &value);
        createNode->data = value; // Assign data to the new node
        createNode->next = NULL; // Point new node to the previous head
        if(head == NULL)
        {
            head = createNode; // Update head to the new node
        }
        else
        {
            new->next = createNode; // Link the new node to the previous node
        }
        new = createNode; // Move new to the current node
    }
    printf("%d", head->next->next->data); // Print the data of the first node
    
} 
