#include<stdio.h>
void change(int *arr)
{
    *arr+=1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    change(arr);
     
    printf("%d",arr[0]);
}