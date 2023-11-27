#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mutlak(int angka){
    return abs(angka);
}

int hitung(int nilai1, int nilai2){
    return abs(nilai1 - nilai2);
}

int main() {
    int a, b, c, d, Hasil;
    
    scanf("%d %d %d %d", &a, &c, &b, &d);
    
    Hasil = hitung(a, b) + hitung(c, d);
    printf("%d\n", mutlak(Hasil));
    
    return 0;
}
