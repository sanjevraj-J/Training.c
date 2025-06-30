#include <stdio.h>
int cid=0;

struct Customer{
    char cusName[50];
    char cusPhno[10];
    int cusId;
}cus[100];

void createCustomer()
{
    printf("Enter Your Name: ");
    scanf("%s",cus[cid].cusName);
    printf("=====>Data Entered Successfully<====");
    cid++;
}

int main()
{
    while(1)
    {
        int n;
        printf(" 1)Create Customer\n 2)Display Customer");
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
        }
    }
    return 0;
}