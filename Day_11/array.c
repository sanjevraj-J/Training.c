#include<stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (max<=arr[i])
        {
            max=arr[i];

        }

    } 
    printf("max: %d ",max);
   
    return 0;
}