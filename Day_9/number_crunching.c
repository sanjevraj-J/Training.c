// num rev
#include<stdio.h>
int main(){
    int val=2300,rev=0;
    while(val>0){
        rev=rev*10+val%10;
        val/=10;
        
    }
    printf("%d",rev);
}

