#include <stdio.h>

int main() {
    int batas_maksimal;
    
    while (1) {
    printf("");
    scanf("%d", &batas_maksimal);

    for (int i = 1; i <= batas_maksimal; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    if (batas_maksimal % 2 == 0) {
        for (int i = batas_maksimal; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    } else {
        for (int i = batas_maksimal - 1; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");

    }

    return 0;
}
