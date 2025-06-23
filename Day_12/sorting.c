#include<stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }


        }
        printf("%d",arr[i]);

    }

}