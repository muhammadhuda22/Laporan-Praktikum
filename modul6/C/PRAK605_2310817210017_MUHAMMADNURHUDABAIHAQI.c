#include <stdio.h>
#define N 10 

void multiplyMatrices(int matriksA[N][N], int matriksB[N][N], int hasil[N][N], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (k = 0; k < n; k++) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
}
int main() {
    int n, i, j;
    int matriksA[N][N], matriksB[N][N], hasil[N][N];
    printf("\n");
    scanf("%d", &n);

    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }
    multiplyMatrices(matriksA, matriksB, hasil, n);

    printf("\n");
    printf("Matriks A x B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}
