#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n); 

    int matr[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matr[i][j]);
        }
    }

    int isUpper = 1, isLower = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j && matr[i][j] != 0)
            {
                isUpper = 0; 
            }
            if (i < j && matr[i][j] != 0)
            {
                isLower = 0;
            }
        }
    }

    if (isUpper)
        printf("The matrix is an Upper Triangular Matrix.\n");
    else if (isLower)
        printf("The matrix is a Lower Triangular Matrix.\n");
    else
        printf("The matrix is neither Upper nor Lower Triangular.\n");

    return 0;
}
