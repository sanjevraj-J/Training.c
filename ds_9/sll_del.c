#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};
 struct node *head=NULL,*old=NULL;
 int a;

//create the number of node from user
void createNode()
{
    
    printf("enter the no of nodes:");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int val;
        printf("enter the value %d:",i+1);
        scanf("%d",&val);
        struct node *createnode = (struct node *)malloc(sizeof(struct node));
        createnode->data=val;
        createnode->next=NULL;
        if(head==NULL)
        {
            head=createnode;
        }
        else
        {
           old->next=createnode;
        }
        old=createnode;
    }
}

//display the node
void displayNode()
{
    struct node *temp=head;
    printf("node values:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

//display from the position

void displayFromPos()
{
    int pos;
    struct node *temp = head;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Enter a valid position\n");
    }

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("No node found from this position\n");
    }

    printf("Node values from position %d: ", pos);
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//insert the node
void insertNode()
{
    struct node *insertnode=(struct node *)malloc(sizeof(struct node));
    int insval,pos;
    printf("Enter the insert value and position:");
    scanf("%d %d",&insval,&pos);
    insertnode->data=insval;
    insertnode->next=NULL;
    struct node *temp=head;
    if(pos<=0)
    {
        printf("Enter the valid position");
    }
    else if(pos==1)
    {
        insertnode->next=head;
        head=insertnode;
    }
    else 
    {
        for(int i=1;i<pos-1 && temp!=NULL;i++)
        {
            temp=temp->next;
        }
        insertnode->next=temp->next;
        temp->next=insertnode;
    }
    

}

// print first or last node value
void dispFL()
{
    int choice;
    struct node *temp=head;
    printf("enter the choice 1-for first val;2-for last val:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("%d",head->data);
    }
    else
    {
       printf("%d",old->data); 

    }
    printf("\n");
}

//delete the node

void nodeDel()
{
    int dNode;
    printf("enter the node you want to delete:");
    scanf("%d",&dNode);
    struct node* temp =head,*temp1;
    if(dNode==1)
    {
        temp1=temp->next;
        free(temp);
        head=temp1;
    }
    else
    {
        for(int i=1;i<dNode-1 && temp->next!=NULL;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next);


    }
}
 
int main()
{
    while(1)
    {
        int n;
        printf("1)insert node\n");
        printf("2)display node\n");
        printf("3)display from position node\n");
        printf("4)insert node\n");
        printf("5)display first or last node\n");
        printf("6)delete the node\n");
        printf(" enter the choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    createNode();
                    break;
            case 2:
                    displayNode();
                    break;
            case 3:
                    displayFromPos();
                    break;
            case 4:
                    insertNode();
                    break;
            case 5:
                    dispFL();
                    break;
            case 6:
                    nodeDel();
                    break;
        }
    }
}