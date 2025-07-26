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
struct Tree *search(int val)
{
    struct Tree *temp=root,*temp1=NULL;
    while(1)
    {
        if(val==temp->data)
        {
            break;
        }
        else if(val>temp->data)
        {
            temp1=temp;
            temp=temp->right;
        }
        else
        {
            temp1=temp;
            temp=temp->left;
        }
    }
    return temp1;
}
void delete(int val)
{
    struct Tree *temp=search(val);
    if(val=temp->right->data)
    {
        if(temp->right->right==NULL && temp->right->left==NULL)
        {
            struct Tree *temp1=temp->right;
            temp->right=NULL;
            free(temp1);
        }
        else if(temp->right->right==NULL || temp->right->left==NULL)
        {
            if(temp->right->right!=NULL)
            {
            struct Tree *temp2=temp->right;
            temp->right=temp->right->right;
            free(temp2);
            }
            else
            {
            struct Tree *temp2=temp->right;
            temp->right=temp->right->left;
            free(temp2);
            }
        }
    }
    else
        {
            struct Tree *temp1 = temp->right->right,*temp2=temp->right,*prev=NULL;
            
            while(temp1->left!=NULL)
            {
                prev=temp1;
                temp1=temp1->left;
            }
            temp1->left=temp->right->left;
            temp1->right= temp->right->right;
            temp->right=temp1;
            prev->left=NULL;
            free(temp2);
        }
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
            case 2:
                printf("enter value to delete: ");
                scanf("%d", &val);
                delete(val);
                break;
            case 3:
                display(root);
                break;
        }
    }
    return 0;
}