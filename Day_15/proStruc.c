#include <stdio.h>
int cid=0;
int pid=0;
int bid=0;


struct Product{
    char proName[50];
    char proQuantity[10];
    int proId;
    float proCost;
}pro[100];



struct Customer{
    char cusName[50];
    char cusPhno[10];
    int cusId;
}cus[100];



struct Billing{
    
    int cuID;
    int n;
    struct Items{
        int itmId;
        int itmqua;
    }itm[100];
    
    
}bill[100];





void createCustomer()
{
    printf("Enter Your Name: ");
    scanf("%s",cus[cid].cusName);
    printf("Enter Your Number: ");
    scanf("%s",cus[cid].cusPhno);
    cus[cid].cusId=cid+1;
    printf("=====>Data Entered Successfully<====");
    cid++;
}
void displayCustomers()
{
    for(int i=0;i<cid;i++)
    {
        
        printf("Customer Name: %d\n",cus[i].cusId);
        printf("Customer Name: %s\n",cus[i].cusName);
        printf("Customer Phone Number: %s\n",cus[i].cusPhno);
        
    }
}
void enterProduct()
{
    printf("Enter product Name: ");
    scanf("%s",pro[pid].proName);
    printf("Enter the product Quantity: ");
    scanf("%s",pro[pid].proQuantity);
    printf("Enter the product cost: ");
    scanf("%f",&pro[pid].proCost);
    pro[pid].proId=pid+1;
    printf("product Entered Successfully\n");
    pid++;
}
void displayProducts()
{
    for(int i=0;i<pid;i++)
    {
        
        printf("product id: %d\n",pro[i].proId);
        printf("product Name: %s\n",pro[i].proName);
        printf("product Quantity: %s\n",pro[i].proQuantity);
        
    }
    printf("Bill Genereted Successfully");
}


void createBill()
{
   printf("Enter Your Customer ID: ");
   scanf("%d",&bill[bid].cuID);
   printf("Eneter Number of products you ant tot buy: ");
   scanf("%d",&bill[bid].n);
   for(int i=0;i<bill[bid].n;i++)
   {
       printf("Enter the Product Id: ");
       scanf("%d",&bill[bid].itm[i].itmId);
       printf("Enter the Product Quantity: ");
       scanf("%d",&bill[bid].itm[i].itmqua);
   }
}




int main()
{
    while(1)
    {
        int n;
        printf("kindly enter your choice \n");
        printf(" 1)Create Customer\n 2)Display Customer\n 3)enter the product\n 4)Display the products\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
               createCustomer();
               break;
            }
            case 2:{
                displayCustomers();
                break;
            }
             case 3:{
               enterProduct();
               break;
            }
            case 4:{
                displayProducts();
                break;
            }
            case 5:{
                createBill();
                break;
            }
            
        }
    }
 return 0;
}