#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    int arr1[n]; // To mark visited duplicates

    // Reading array elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr1[i] = 0; // Initialize arr1 to 0
    }

    printf("Non-duplicate (unique) elements are:\n");

    for(int i = 0; i < n; i++)
    {
        if(arr1[i]) // Already marked, skip
            continue;

        int count = 0;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr1[j] = 1; // Mark duplicate
            }
        }

        if(count == 0) // No duplicates found
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
