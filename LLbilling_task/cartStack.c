// cart deletion using the stack linked list

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int itmid=1;

struct Product{
    int productId,quantity;
    char name[30];
    struct Product *next;
};
struct cart{
    int productId,quantity;
    char name[30];
    struct cart *next;
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


void cart(struct Product **producthead, struct cart **cartnode)
{
    int Choice;
    printf("Enter the product id to add to cart: ");
    scanf("%d", &Choice);

    struct Product *temp = *producthead;
    while (temp != NULL)
    {
        if (temp->productId == Choice)
        {
            struct cart *newCartNode = (struct cart *)malloc(sizeof(struct cart));
            newCartNode->productId = temp->productId;
            int quantity;
            printf("enter the quantity:");
            scanf("%d", &quantity);
            newCartNode->quantity =quantity;
            strcpy(newCartNode->name, temp->name);
            newCartNode->next = *cartnode;
            *cartnode = newCartNode;
            printf("Product pushed to cart (stack) successfully\n");
            return;
        }
        temp = temp->next;
    }
    printf("Product ID not found.\n");
}

void dispCart(struct cart **cartnode)
{
    struct cart *temp = *cartnode;

    printf("Cart (stack) details:\n");
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
void cartdelete(struct cart **cartnode)
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
        struct cart *temp = *cartnode;
        *cartnode = (*cartnode)->next;
        free(temp);
        printf("Product removed from cart successfully.\n");
        return;
    }
}
int main()
{
    struct Product *head = NULL, *prevNode = NULL;
    struct cart *cartnode = NULL;
    while(1)
    {
        int n;
        printf(" 1)Create New Product\n 2)Display All Product\n 3)add to cart\n 4)display cart\n 5)delete from cart\n");
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
                cart(&head, &cartnode);
                break;
            }
            case 4:{
               dispCart(&cartnode);
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