
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i+=n)
    {
        printf("%d\n",i);
    }
    return 0;
}
