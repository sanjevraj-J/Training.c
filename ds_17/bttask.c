#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int data;
    struct Tree *left,*right;
};

struct Tree *root = NULL;

void insertNode(int val)
{
    struct Tree *createNode = (struct Tree*) malloc(sizeof(struct Tree));
    createNode->data=val;
    createNode->left=NULL;
    createNode->right=NULL;
    if(root==NULL)
    {
        root=createNode;
    }
    else
    {
        struct Tree *temp=root;
        while(1)
        {
            if(val<temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=createNode;
                    return;
                }
                else
                {
                    temp=temp->left;
                }
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right=createNode;
                    return;
                }
                else
                {
                    temp=temp->right;
                }
            }
        }
    }
    
}
void display(struct Tree *temp)
{
   if(temp==NULL)
   {
    return;
   }
   display(temp->left);
   printf("%d\t",temp->data);
   display(temp->right);
}
void search(int m)
{
    struct Tree *temp = root;
    while (temp != NULL) {
       if((temp->data)==m)
       {
        break;
       }
       else if((temp->data)>m)
       {
        temp=temp->right;
       }
       else{
        temp=temp->left;
       }
    }
    if(temp->left==NULL || temp->right==NULL)
    {
        printf("Its a Leaf Node ");
        printf("%d\n",temp->data);
    }
    else{
        printf("%d %d %d\n",temp->data,temp->left->data,temp->right->data);
    }
}
int main()
{
   int n, val,m;
    while (1) {
        printf("\n1)insert the node\n2)search\n3) Display\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertNode(val);
                break;
            case 2:
               printf("enter the node to search:");
               scanf("%d",&m);
                search(m);
                break;
            case 3:
                display(root);
                break;
        }
    }
    return 0;
}