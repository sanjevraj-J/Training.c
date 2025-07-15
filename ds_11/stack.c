#include <stdio.h>
int size = 5;
int top = -1;
int stack[5];

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
    for (int i = top; i>=0; i--)
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
int main()
{
    push(10);
    push(20);
    push(30);
    dis();
    pop();
    dis();
    return 0;
}