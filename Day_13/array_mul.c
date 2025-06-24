
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Read matrix sizes:");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
     int mat1[r1][c1], mat2[r2][c2], res[r1][c1];

   
    if (c1== r2)
    {
         printf("Enter mat1:\n");
         for (int i = 0; i < r1; i++)
        {
         for (int j = 0; j < c1; j++)
         {
            scanf("%d", &mat1[i][j]);
         }
        }

        printf("Enter mat2:\n");
        for (int i = 0; i < r2; i++)
        {
         for (int j = 0; j < c2; j++)
         {
            scanf("%d", &mat2[i][j]);
         }
        }

     for (int i = 0; i < r1; i++)
     {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
        }
     }
     for (int i = 0; i < r1; i++)
     {
        for (int j = 0; j < c2; j++)
        {
            for(int r=0;r<c1;r++)
            {
             res[i][j] += mat1[i][r]* mat2[r][j];
            }
        }
     }

      printf("Result matrix:\n");
      for (int i = 0; i < r1; i++)
     {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", res[i][j]); 
        }
        printf("\n");
     }
    }
    else
    {
        printf("Invalid input: Rows and columns must be equal for addition.\n");
        return 0;
    }
 return 0;
}
