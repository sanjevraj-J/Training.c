#include<stdio.h>
int main()
{
    int size = 5;
    int arr[8] = {25, 6, 71, 85, 72};
    int num = 3; 
    int val = {102};

    
    for (int i = size; i > num; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[num] = val;
    size++;

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
