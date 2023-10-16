#include <stdio.h>
#include <math.h>
int main() 
{
    int tinggi, miring, alas, keliling, luas;
    printf("");
    scanf("%d", &tinggi);
    printf("");
    scanf("%d", &miring);

    alas = sqrt(miring*miring-tinggi*tinggi);
    keliling = (alas+tinggi+miring);
    luas = (0.5*alas*tinggi);
    printf("Alas = %.d cm \n", alas);
    printf("Tinggi = %.d cm \n", tinggi);
    printf("Keliling = %.d cm \n", keliling);
    printf("Luas = %.d cm^2 \n", luas);

    return 0;
    
} 