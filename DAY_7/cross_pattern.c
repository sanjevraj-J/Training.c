#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j || i+j==n+1)
                printf("%d",i);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
