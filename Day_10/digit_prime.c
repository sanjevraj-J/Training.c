#include <stdio.h>

int main() {
    int val, i;
    int digit, rev = 0;

   
    scanf("%d", &val);

    
    int temp = val;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

  
    while (rev > 0) {
        digit = rev % 10;

       
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            printf("prime:%d ", digit);
        }
        else {
            printf("no prime\n");
        }

        rev /= 10;
    }

    return 0;
}
