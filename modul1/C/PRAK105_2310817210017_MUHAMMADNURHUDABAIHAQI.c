#include <stdio.h>
int main ()
{
int a = 9;
int b = 5;
int x = 8;
int y = 8;
int ab = 9%5;
int xy = 8%8;
int total = (ab+xy);
printf("Variabel a bernilai %d\n", a);
printf("Variabel b bernilai %d\n", b);
printf("Variabel x bernilai %d\n", x);
printf("Variabel y bernilai %d\n", y);
printf("Total sisa hasil bagi dari a dibagi b dan x dibagi y adalah %d\n", total);
return 0;
}