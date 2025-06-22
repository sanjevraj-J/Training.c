#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    scanf("%d", &num);

    int rev = reverse(num);
    int sq = num * num;
    int rev_sq = rev * rev;

    if (reverse(sq) == rev_sq)
        printf("Adam Number\n");
    else
        printf("Not Adam Number\n");

    return 0;
}
