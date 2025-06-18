#include <stdio.h>

int main()
{
    int num = 101;
    int weight = 1;
    int number;
    int sum = 0;  

    while (num > 0) {
        number = num % 10;
        sum =sum+ number * weight;
        weight =weight* 2;  
        num =num/ 10;
    }

    printf("Decimal equivalent: %d\n", sum); 
    return 0;
}
