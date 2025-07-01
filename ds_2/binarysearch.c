#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted values:\n");  
    for(int i = 0; i < n; i++)
    { 
        scanf("%d", &arr[i]);
    }

    int ele;
    printf("Enter the element to search:\n");
    scanf("%d", &ele);

    int l = 0, r = n - 1;
    int found = 0; 

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(ele == arr[mid])
        {
            printf("The index of the element is %d\n", mid);
            found = 1; 
            break;
        }
        else if(ele > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element is not in the array\n");
    }

    return 0;
}
