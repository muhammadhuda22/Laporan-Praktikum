#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000];
    int i, len_kode, len_pesan, bintang = 0, pagar = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    if (kode[strlen(kode) - 1] == '\n') kode[strlen(kode) - 1] = '\0';
    if (pesan[strlen(pesan) - 1] == '\n') pesan[strlen(pesan) - 1] = '\0';

    len_kode = strlen(kode);
    len_pesan = strlen(pesan);

     if (len_kode != len_pesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
     }

    for (i = 0; i < len_kode; i++) {
        if (pesan[i] == kode[i]) {
            pesan[i] = '*'; 
            bintang++;
        } else {
            pesan[i] = '#'; 
            pagar++;
        }
    }
    printf("%s\n", pesan);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}
