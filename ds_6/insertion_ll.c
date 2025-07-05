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
     struct Node *temp = head;
     printf("Data in the linked list: ");
     while(temp != NULL)
     {
        printf("%d ", temp->data); // Print the data in the linked list
        temp = temp->next; // Move to the next node
     }
} 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// int main() {
//     struct Node *head = NULL, *temp = NULL, *newNode = NULL;
//     int n, value;

//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         newNode = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for new node
//         if (newNode == NULL) {
//             printf("Memory allocation failed.\n");
//             return 1;
//         }

//         printf("Enter data for node %d: ", i + 1);
//         scanf("%d", &value);

//         newNode->data = value;
//         newNode->next = NULL;

//         if (head == NULL) {
//             head = newNode; // First node becomes head
//         } else {
//             temp->next = newNode; // Link the previous node to the current
//         }
//         temp = newNode; // Move temp to the last node
//     }

//     // Print the linked list
//     printf("Data in the linked list: ");
//     temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");

//     return 0;
// }
