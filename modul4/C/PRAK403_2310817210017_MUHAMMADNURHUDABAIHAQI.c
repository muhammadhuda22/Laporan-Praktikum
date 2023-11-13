#include <stdio.h>

int main() {
    int num1, num2;

    while (1) {
        printf("");
        scanf("%d %d", &num1, &num2);

        if (num1 == 0 && num2 == 0) {
            break;
        }

        printf("%d %d", num1, num2);

        int step = (num1 > num2) ? -1 : 1;
        for (int i = num1 + step; i != num2; i += step) {
            printf(" - %d %d", i, num1 + num2 - i);
        }

        printf(" - %d %d\n", num2, num1 + num2 - num2);
    }

    return 0;
}
