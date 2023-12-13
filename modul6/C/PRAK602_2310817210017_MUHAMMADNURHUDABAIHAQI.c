#include <stdio.h>

int main() {
    int jumlah_ruangan, a;
    scanf("%d", &jumlah_ruangan);

    int zetsu_putih[jumlah_ruangan];
    for (a = 0; a < jumlah_ruangan; a++) {
        scanf("%d", &zetsu_putih[a]);
    }
    for (a = 0; a < jumlah_ruangan; a++) {
        int jumlah_setelah_pembelahan = zetsu_putih[a] * (a + 1);
        printf("%d ", jumlah_setelah_pembelahan);
    }
    printf("\n");
    return 0;
}
