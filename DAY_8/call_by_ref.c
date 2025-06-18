#include<stdio.h>
void  inc(int *y){
    (*y)++;
}
int main(){
    int a=10;
    inc (&a);
    printf("%d\n",a);
   return 0; 
}