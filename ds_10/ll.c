#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void cart(struct Product **head, struct Product **cartnode)
{
    int Choice;
    printf("Enter the product id to add to cart: ");
    scanf("%d", &Choice);

    struct Product *temp = *head;
    while (temp != NULL)
    {
        if (temp->productId == Choice)
        {
            struct Product *newCartNode = (struct Product *)malloc(sizeof(struct Product));
            newCartNode->productId = temp->productId;
            newCartNode->quantity = temp->quantity;
            strcpy(newCartNode->name, temp->name);
            newCartNode->next = NULL;
            if (*cartnode == NULL)
            {
                *cartnode = newCartNode;
            }
            else
            {
                struct Product *cartTemp = *cartnode;
                while (cartTemp->next != NULL)
                {
                    cartTemp = cartTemp->next;
                }
                cartTemp->next = newCartNode;
            }
            printf("Product added to cart successfully\n");
            return;
        }
        temp = temp->next;
    }
    printf("Product ID not found.\n");
}

void dispCart(struct Product **head, struct Product **cartnode)
{
    struct Product *temp = *cartnode;

    printf("Cart details:\n");
    if (temp == NULL)
    {
        printf("Cart is empty.\n");
        return;
    }
    while (temp != NULL)
    {
        printf("ID: %d\n", temp->productId);
        printf("Quantity: %d\n", temp->quantity);
        printf("Name: %s\n", temp->name);
        temp = temp->next;
    }
}
void cartdelete(struct Product **cartnode)
{
    int id;
    printf("Enter the product ID to remove from cart: ");
    scanf("%d", &id);   
  if (*cartnode == NULL)
    {
        printf("Cart is empty. No products to remove.\n");
        return;
    }
  if ((*cartnode)->productId == id)
    {
        struct Product *temp = *cartnode;
        *cartnode = (*cartnode)->next;
        free(temp);
        printf("Product removed from cart successfully.\n");
        return;
    }
}
int main()
{
    struct Product *head = NULL, *prevNode = NULL,*cartnode=NULL;
    while(1)
    {
        int n;
        printf("  1)Create New Product\n  2)Display All Product\n 3)add to cart\n 4)display cart\n 5)delete from cart\n");
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
            case 5:{
                cartdelete(&cartnode);
                break;
            }
        }
    }

    return 0;
}