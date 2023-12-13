#include <stdio.h>

int main() {
    int n1, n2, i, j;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }
    int total_input = 2 * n1; 
    int matrik1[n1], matrik2[n2];

    for (i = 0; i < total_input; i++) {
        if (i < n1) {
            scanf("%d", &matrik1[i]);
        } else {
            scanf("%d", &matrik2[i - n1]);
        }
    }
    for (i = 0; i < n1; i++) {
        printf("%d ", matrik1[i] * matrik2[i]);
    }
    printf("\n");
    return 0;
}
