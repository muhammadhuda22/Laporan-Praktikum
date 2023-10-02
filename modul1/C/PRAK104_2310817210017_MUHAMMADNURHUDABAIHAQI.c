#include <stdio.h>
int main (){
    int a = 400000;
    int b = 350000;
    int c = (a*13/100);
    int d = (b*21/100);
    int x = (a-c);
    int y = (b-d);
    int hasil = (x+y);
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", x);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", y);
    return 0;  
}