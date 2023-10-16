#include <stdio.h>
int main() 
{
    float nilai_pertama, nilai_kedua;
    printf("Masukan Nilai Pertama:");
    scanf("%f", &nilai_pertama);
    printf("Masukan Nilai Kedua:");
    scanf("%f", &nilai_kedua);
    float hasil = nilai_pertama + nilai_kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\" \n", nilai_pertama, nilai_kedua, hasil);
    
    return 0;
    
} 