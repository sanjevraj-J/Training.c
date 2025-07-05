#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* pre;
    struct Node* next;
};

int main()
{
    struct Node* createNode=NULL,*new=NULL,*head=NULL;
    int n;
    printf("enter the number nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
     createNode=(struct Node*)malloc(sizeof(struct Node));
     int val;
     printf("Enter the value of %d:",i+1);
     scanf("%d",&val);
     createNode->data=val;
     createNode->pre=NULL;
     createNode->next=NULL;
     struct Node*temp=createNode;
     if(head==NULL)
     {
        head=temp;
     }
    else
    {
        new->next=temp;
        temp->pre=new;
    }
    new=temp;
    }
    struct Node* current = head;
    // printf("Data in the doubly linked list: "); 
    // while (current != NULL)
    // {
    //     printf("%d ", current->data);
    //     current = current->next;
    // } 
    printf("value: %d\n",head->data);
    printf("value: %d\n",head->next->data);
    printf("value: %d\n",head->next->next->data);
    printf("value: %d\n",head->next->pre->data);
} 