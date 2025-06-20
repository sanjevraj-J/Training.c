#include <stdio.h>

int main() {
    int num, temp, rev, lower, upper;
    scanf("%d", &num);

    
    temp = num;
    rev = 0;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (rev == num) {
        printf("Palindrome: %d\n", num);
        return 0;
    }

    // not a palindrome nearest one
    lower = num - 1;
    upper = num + 1;

    while (1) {
        
        // Check upper
        temp = upper;
        rev = 0;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }
        if (rev == upper) {
            printf("Nearest palindrome: %d\n", upper);
            break;
        }
        // Check lower
        temp = lower;
        rev = 0;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }
        if (rev == lower) {
            printf("Nearest palindrome: %d\n", lower);
            break;
        }


        lower--;
        upper++;
    }

    return 0;
}
