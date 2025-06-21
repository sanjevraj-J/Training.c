
#include <stdio.h>

int main()
{
      

    char val;
    scanf("%c",&val);

    if ((val >= 97 && val <= 122) || (val >= 65 && val <= 90)) {
        printf("alphabet\n");
    }
    else {
        printf("not an alphabet\n");
    }

    return 0;
}
