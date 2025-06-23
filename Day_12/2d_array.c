#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Fix 1: use &n

    int arr[n][n];

    // Reading matrix elements
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            
        }
    }

    // Printing the matrix
    printf("Matrix is:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]); // Print each element with space
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
