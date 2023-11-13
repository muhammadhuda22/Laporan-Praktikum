#include <stdio.h>

void hitungKelipatan(int n, int kelipatan) {
    int total = 0;

    for (int i = 1; i <= n; i++) {
        int baristotal = 0;
        printf("(");
        for (int h = i; h > 0; h--) {
            baristotal += h * kelipatan;
            printf("%d * %d", h, kelipatan);
            if (h > 1) {
                printf(" + ");
            }
        }
        printf(") = %d\n", baristotal);
        total += baristotal;
    }

    printf("%d\n", total);
}

int main() {
    int n, kelipatan;
    while(1){
    printf("");
    scanf("%d %d", &n, &kelipatan);
    if (n == 0) {
        break;
    }
    hitungKelipatan(n, kelipatan);
    printf("\n");
    }
    return 0;
}
