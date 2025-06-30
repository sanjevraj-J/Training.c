#include<stdio.h>
int main(){
int n,m;
printf("size of the matrix a and b:\n");
scanf("%d %d",&n,&m);
int a[n][n],b[m][m];
int equal=0;
 if (n != m) {
        printf("Not an equal matrix (size mismatch)\n");
        return 0;
    }
printf("Enter elements for matrix a:\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter elements for matrix b:\n");
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]==b[i][j])
        {
            equal=1;
        }
        else{
            equal=0;
            break;
        }
          
    }
    if(equal==0)break;
}
if(equal)
{
    printf("its equal matrix");
}
else{
    printf("not a equal matrix");
}
}
