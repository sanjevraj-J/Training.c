#include<stdio.h>
int main(){
    int val=2300,count=0;
    while(val>0){
        count++;
        val/=10;
        
    }
    printf("%d",count);
}