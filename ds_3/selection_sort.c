#include<stdio.h>
int main()
{
    int n;
    int small,j,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
     int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        small=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small]) 
            {
                small=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
}
for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}