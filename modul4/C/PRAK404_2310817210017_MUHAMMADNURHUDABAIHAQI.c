#include <stdio.h>
#include <string.h>

void calculator() {
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        int pilihan;
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Nurhuda Baihaqi\n");
            break;
        } else if (1 <= pilihan && pilihan <= 4) {
            double nilai_pertama, nilai_kedua;
            printf("Masukkan nilai pertama: ");
            scanf("%lf", &nilai_pertama);
            printf("Masukkan nilai kedua: ");
            scanf("%lf", &nilai_kedua);

            double hasil;
            char operasi[15];

            if (pilihan == 1) {
                hasil = nilai_pertama + nilai_kedua;
                strcpy(operasi, "Penjumlahan");
            } else if (pilihan == 2) {
                hasil = nilai_pertama - nilai_kedua;
                strcpy(operasi, "Pengurangan");
            } else if (pilihan == 3) {
                hasil = nilai_pertama * nilai_kedua;
                strcpy(operasi, "Perkalian");
            } else if (pilihan == 4) {
                if (nilai_kedua != 0) {
                    hasil = nilai_pertama / nilai_kedua;
                    strcpy(operasi, "Pembagian");
                } else {
                    printf("Error: Pembagian dengan nol tidak diizinkan.\n");
                    continue;
                }
            }

            printf("Hasil %s antara %.2f dan %.2f adalah %.2f\n", operasi, nilai_pertama, nilai_kedua, hasil);

        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
}

int main() {
    calculator();
    return 0;
}
