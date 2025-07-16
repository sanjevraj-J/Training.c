#include<stdio.h>
int n;
int queue[100];
int front=-1,rear=-1;
void enqueue(int val)
{
    if(rear == n-1)
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
    {
        front = 0;
    }
    rear++;
    queue[rear]=val;
    printf("value is added to the queue\n");
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    front++;
    printf("val is deleted\n");
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main()
{
    printf("enter the size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int val;
        printf("enter the value to be added to the queue:");
        scanf("%d",&val);
        enqueue(val);
    }
    display();
    dequeue();
    display();

}   
