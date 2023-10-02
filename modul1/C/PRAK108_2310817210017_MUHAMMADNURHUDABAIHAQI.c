#include <stdio.h>

int main (){
    int a = 5;
    float b = 14.0;
    float phi = 3.14;
    float keliling = (b/a);
    float r = (keliling / (2*phi));
    printf("Diketahui :");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %.0f kilometer\n", b);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
    

}