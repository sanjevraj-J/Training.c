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
int main()
{
   int n, val;
    while (1) {
        printf("\n1)insert the node\n2)delete the node\n3) Display\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertNode(val);
                break;
            // case 2:
            //     dequeue();
            //     break;
            case 3:
                display(root);
                break;
        }
    }
    return 0;
}