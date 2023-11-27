#include <stdio.h>
#include <string.h>

void Biodata(int tahunLahir, char Namaku[], char Asal[]) {
    int tahunSekarang = 2023;

    printf("Perkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", (tahunSekarang - tahunLahir));
    printf("Saya Adalah Angkatan : %d\n", tahunSekarang);
    printf("Asal Saya dari : %s\n\n", Asal);
}

int main() {
    int tahunLahir;
    char Namaku[30], Asal[15];

    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", Asal);

    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}
