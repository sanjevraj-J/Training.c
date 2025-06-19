
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if((n&1)==0)
        {
            printf("its even");
            break;
        }
        else
        {
            printf("its odd");
            break;
        }
    }

    return 0;
}
