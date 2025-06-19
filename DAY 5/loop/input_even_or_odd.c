
#include <stdio.h>

int main()
{
    int n;
    int i=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%deven number\n",i);
        }
        else
        {
            printf("%dodd number\n",i);
        }
         i++;
    }
   

    return 0;
}











