#include <stdio.h>
int size;
int data[100];
int priority[100];
int count=0;

void enqueue(int val,int pri)
{
    if(count==size)
    {
        printf("The queue is full\n");
        return;
    }
    data[count]=val;
    priority[count]=pri;
    count++;
    printf("The Data %d is stored with priority %d\n",val,pri);
}

void display()
{
    if(count==0)
    {
        printf("data is empty");
    }
    for (int i=0;i<count;i++)
    {
        printf("%d \t",data[i]);
    }
}

void pop()
{
    int max=0;
    for (int i=0;i<count;i++)
    {
        if(priority[i]>priority[max])
        {
            max=i;
        }
    }
    
    for(int i=max;i<count;i++)
    {
    data[i]=data[i+1];
    }
    count--;
}
int main()
{
    int n,val,pri;
    printf("Enter the size of the arrays: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1)Enter the Data and Priority\n 2)Delete the Data\n 3)Display\n");
        printf("Enter Your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value and Priority: ");
                scanf("%d %d",&val,&pri);
                enqueue(val,pri);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
        }
    }

    return 0;
}