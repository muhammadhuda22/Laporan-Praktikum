#include <stdio.h>
int main() 
{
    float jari_jari, tinggi;
    printf("");
    scanf("%f", &jari_jari);
    printf("");
    scanf("%f", &tinggi);
    float volume = (3.1428571428571 *jari_jari*jari_jari*tinggi);
    printf("Volume = %.2f \n", volume);
    float luas = (2*3.1428571428571*jari_jari*(jari_jari+tinggi));
    printf("Luas = %.2f \n", luas);
    float keliling = (2*3.1428571428571*jari_jari);
    printf("Keliling= %.2f \n", keliling);

    return 0;
    
} 