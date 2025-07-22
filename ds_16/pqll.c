#include<stdio.h>
#include<stdlib.h>
int size;
struct Node
{
    int data;
    int priority;
    struct Node *next;
};
struct Node *head = NULL;
void enqueue(int val,int pri)
{
    struct Node *createNode=(struct Node*)malloc(sizeof(struct Node));
    createNode->data=val;
    createNode->priority=pri;
    createNode->next=NULL;
    if(head==NULL || createNode->priority>head->priority)
    {
        createNode->next=head;
        head =createNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL && pri < temp->next->priority)
        {
            temp = temp->next;
        }
        createNode->next = temp->next;
        temp->next = createNode;
    }
}

void dequeue()
{
    if(head==NULL)
    {
        printf("The queue is empty\n");
        return;
    }
    struct Node *temp=head;
    head=head->next;
    free(temp);
    printf("Element dequeued\n");
}

void display()
{
    if(head==NULL)
    {
        printf("The queue is empty\n");
        return;
    }
    struct Node *temp=head;
    printf("Queue: ");
    while(temp!=NULL)
    {
        printf("%d %d ", temp->data, temp->priority);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int n, val, pri;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    while (1) {
        printf("\n1) Enqueue\n2) Dequeue\n3) Display\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Enter value and priority: ");
                scanf("%d %d", &val, &pri);
                enqueue(val, pri);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }
    return 0;
}