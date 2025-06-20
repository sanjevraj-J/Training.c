#include<stdio.h>
int main(){
    int val,sum=1;
    scanf("%d",&val);
    while(val>0){
        sum=val%10*sum;
        val/=10;
        
    }
    printf("%d",sum);
}