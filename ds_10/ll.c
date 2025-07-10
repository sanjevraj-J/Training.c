#include <stdio.h>
#include <stdlib.h>


int itmid=1;

struct Product{
    int productId,quantity;
    char name[30];
    struct Product *next;

};

void createProduct(struct Product **head, struct Product **prevNode)
{
    int n;
    printf("enter the number of products:");
    scanf("%d", &n);
    struct Product* createPro = NULL;
    for(int i=0; i<n; i++)
    {
        int quan;
        printf("enter the product quantity:");
        scanf("%d", &quan);
        createPro = (struct Product *)malloc(sizeof(struct Product));
        printf("enter the name: ");
        scanf("%s",createPro->name);
        createPro->productId = itmid++;
        createPro->quantity = quan;
        createPro->next = NULL;
        if(*head == NULL)
        {
            *head = createPro;
        }
        else
        {
            (*prevNode)->next = createPro;
        }
        *prevNode = createPro;
    }
}

void displayProduct(struct Product **head)
{
    struct Product *temp = *head;
    printf("product details:\n");
    while(temp != NULL)
    {
        printf("ID: %d\n", temp->productId);
        printf("Quantity: %d\n", temp->quantity);
        printf("Name: %s\n", temp->name);
        temp = temp->next;
    }
}
void cart(struct Product **head,struct Product **cartnode)
{
    int Choice;
    printf("enter the product id to add cart:");
    scanf("%d",&Choice);
    *cartnode=(struct Product *)malloc(sizeof(struct Product));
    struct Product *temp =*head;
    while(temp != NULL)
    {
        if(temp->productId == Choice)
        {
            (*cartnode)->productId = temp->productId;
            (*cartnode)->quantity = temp->quantity;
            printf("Product added to cart successfully\n");
            return;
        }
        temp = temp->next;
    }   

}
void dispCart(struct Product **head, struct Product **cartnode)
{
    struct Product *temp = *cartnode;

    printf("Cart details:\n");
    while(temp != NULL)
    {
        printf("ID: %d\n", temp->productId);
        printf("Quantity: %d\n", temp->quantity);
        printf("Name: %s\n", temp->name);
        temp = temp->next;
    }
}
int main()
{
    struct Product *head = NULL, *prevNode = NULL,*cartnode=NULL;
    while(1)
    {
        int n;
        printf("  1)Create New Product\n  2)Display All Product\n 3)add to cart\n 4)display cart\n");
        printf("Enter the Choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:{
                createProduct(&head, &prevNode);
                break;
            }
            case 2:{
                displayProduct(&head);
                break;
            }
            case 3:{
                cart(&head,&cartnode);
                break;
            }
            case 4:{
               dispCart(&head,&cartnode);
               break;
            }
        }
    }

    return 0;
}