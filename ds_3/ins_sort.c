#include<stdio.h>

int main()
{
    int arr[100], n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
    for(int i=1;i<n;i++)
        {
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}