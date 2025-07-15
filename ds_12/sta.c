#include <stdio.h>

int top = -1;
int size;
int stack[50];

void push(int val)
{
    if (top == size - 1)
    {
        printf("The Stack is Overflow\n");
        return;
    }
    stack[++top] = val;
    printf("Value Entered\n");
}

void dis()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped element: %d\n", stack[top--]);
}

void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

void isFull()
{
    if (top == size - 1)
    {
        printf("The Stack is full\n");
        return;
    }
    else
    {
        printf("The Stack is not full\n");
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty, no peek element\n");
    }
    else
    {
        printf("Value in the peek: %d\n", stack[top]);
    }
}

int main()
{
    printf("Enter the size of your stack: ");
    scanf("%d", &size);

    int n;
    printf("Enter the number of input elements you want: ");
    scanf("%d", &n);

    int val;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the val\n:");
        scanf("%d", &val);
        push(val);
    }

    dis();
    pop();
    dis();
    isEmpty();
    isFull();
    peek();

    return 0;
}
