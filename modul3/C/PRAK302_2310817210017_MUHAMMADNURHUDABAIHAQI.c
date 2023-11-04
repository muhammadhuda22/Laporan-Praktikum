#include <stdio.h>

int main() {
    int nilai;

    while (1) {
        printf("");
        scanf("%d", &nilai);

        char nilaiHuruf;

        if (nilai >= 80) {
            printf("A\n");
        } else if (nilai >= 70 && nilai <= 79) {
            printf("B\n");
        } else if (nilai >= 60 && nilai <=69) {
            printf("C\n");
        } else if (nilai >= 50 && nilai <=59) {
            printf("D\n");
        } else {
            printf("E\n");
        }

    }

    return 0;
}
