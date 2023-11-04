#include <stdio.h>

int main() {
    int nilai;

    while (1) {
        printf("");
        scanf("%d", &nilai);


        if (nilai == 0) {
            printf("Nol\n");
        } else if (nilai >= 1 && nilai <=9) {
            printf("Satuan\n");
        } else if (nilai == 10) {
            printf("Puluhan\n");
        } else if (nilai >= 11 && nilai <=19) {
            printf("Belasan\n");
        } else if (nilai >= 20 && nilai <=99) {
            printf("Puluhan\n");
        } else {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        }
    
    }

    return 0;
}
