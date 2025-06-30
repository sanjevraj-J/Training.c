#include<stdio.h>
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d", &n);
    int arr[n], max = 0, second = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }

    printf("2nd max: %d", second);

    return 0;
}
