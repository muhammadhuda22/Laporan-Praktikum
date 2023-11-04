#include <stdio.h>

int main() {
    int jumlahdetik;

    printf("");
    scanf("%d", &jumlahdetik);

    int hari, jam, menit, detik;
    hari = jumlahdetik / 86400;
    jumlahdetik %= 86400;
    jam = jumlahdetik / 3600;  
    jumlahdetik %= 3600;       
    menit = jumlahdetik / 60;
    jumlahdetik %= 60;
    detik = jumlahdetik % 60;

     if (jam > 24) {
            hari = jam / 24;
            jam %= 24;
        }
        if (hari>0){
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
        } else {
            printf("%02d:%02d:%02d\n", jam, menit, detik);
        }

    return 0;
}
