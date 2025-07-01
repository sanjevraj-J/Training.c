#include<stdio.h>
int main()
{
    int size=5;
    int arr[5]={1,2,3,4,5};
    int num=3;
    for (int i=num;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i=0;i<size-1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
